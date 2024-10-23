/*
🎉⭐     884. Uncommon Words from Two Sentences
        📌 Easy

A sentence is a string of single-space separated words where each word consists only of lowercase letters.

A word is uncommon if it appears exactly once in one of the sentences, and does not appear in the other sentence.

Given two sentences s1 and s2, return a list of all the uncommon words. You may return the answer in any order.



Example 1:

Input: s1 = "this apple is sweet", s2 = "this apple is sour"

Output: ["sweet","sour"]

Explanation:

The word "sweet" appears only in s1, while the word "sour" appears only in s2.

Example 2:

Input: s1 = "apple apple", s2 = "banana"

Output: ["banana"]



Constraints:

1 <= s1.length, s2.length <= 200
s1 and s2 consist of lowercase English letters and spaces.
s1 and s2 do not have leading or trailing spaces.
All the words in s1 and s2 are separated by a single space.

 */

#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

using namespace std;
vector<string> split(string &s)
{                             
        vector<string> words;
        int start = 0;    
        for (int i = 0; i <= s.size(); ++i)
        { 
                if (i == s.size() || s[i] == ' ')
                {                                                    //+
                        words.push_back(s.substr(start, i - start)); //+
                        start = i + 1;                               //+
                } //+
        } //+
        return words; //+
}

vector<string> uncommonWords(string s1, string s2)
{
        unordered_map<string, int> wordCount;
        vector<string> result;

        // Count the occurrences of each word in s1 and s2
        for (const auto &word : split(s1))
        {
                wordCount[word]++;
        }
        for (const auto &word : split(s2))
        {
                wordCount[word]++;
        }

        // Collect the uncommon words
        //     for () {
        //         if (count == 1) {
        //             result.push_back(word);
        //         }
        //     }

        return result;
}

int main(){
        string s1 = "this apple is sweet";
        string s2 = "this apple is sour";
        vector<string> uncommon = split(s2);

        for( auto ele : uncommon) {
                cout << ele << endl;
        }
}