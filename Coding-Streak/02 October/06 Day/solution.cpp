#include <bits/stdc++.h>
using namespace std;


/*
    📌Given two sentences "sentence1" and "sentence2", return true if sentence1 and sentence2 are similar. Otherwise, return false.

    👉 Two sentences s1 and s2 are considered similar
        
        1. if it is possible to insert an arbitrary sentence (possibly empty) inside one of these sentences such that the two sentences become equal.

        2. Note that the inserted sentence must be separated from existing words by spaces.
 */

vector<string> split(const string &sentence)
{
    istringstream iss(sentence);
    return vector<string>(istream_iterator<string>(iss), istream_iterator<string>());
}

bool areSentencesSimilar(string sentence1, string sentence2)
{
    vector<string> s1 = split(sentence1);
    vector<string> s2 = split(sentence2);
    
    while (!s1.empty() && !s2.empty() && s1.front() == s2.front())
    {
        s1.erase(s1.begin());
        s2.erase(s2.begin());
    }
    while (!s1.empty() && !s2.empty() && s1.back() == s2.back())
    {
        s1.pop_back();
        s2.pop_back();
    }
    return s1.empty() || s2.empty();
}

//------------------------------------------------------------

// Input: sentence1 = "My name is Haley", sentence2 = "My Haley"

// Output: true

// Explanation:

// sentence2 can be turned to sentence1 by inserting "name is" between "My" and "Haley".

int main()
{

    string sentence1 = "My name is Haley";
    string sentence2 = "My Haley";

    bool res = areSentencesSimilar(sentence1, sentence2);
    cout << res << endl;
}