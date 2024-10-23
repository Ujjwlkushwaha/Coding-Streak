#include <iostream>
#include <vector>
#include <string>
using namespace std;

bool checkInclusion(string s1, string s2) {
    int n1 = s1.size();
    int n2 = s2.size();

    // If s1 is larger than s2, s2 can't contain a permutation of s1
    if (n1 > n2) return false;

    // Frequency arrays for s1 and for the current window in s2
    vector<int> freq1(26, 0), freq2(26, 0);

    // Count frequency of characters in s1 and in the first window of s2
    for (int i = 0; i < n1; i++) {
        freq1[s1[i] - 'a']++;
        freq2[s2[i] - 'a']++;
    }

    // Slide the window across s2
    for (int i = 0; i <= n2 - n1; i++) {
        if (freq1 == freq2) return true; // If the frequency arrays match, return true

        // Slide the window by updating the frequency array
        if (i + n1 < n2) {
            freq2[s2[i + n1] - 'a']++;   // Add the next character to the window
            freq2[s2[i] - 'a']--;        // Remove the first character of the current window
        }
    }

    return false;
}

int main() {
    string s1 = "ab";
    string s2 = "eidbaooo";

    if (checkInclusion(s1, s2)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}

