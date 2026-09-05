//Solution for "Detect Panagram" kata
//https://www.codewars.com/kata/545cedaa9943f7fe7b000048/train/cpp
#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

bool is_pangram(const std::string& s) {

    bool alphBool[26] = {false};
    char ch;

    //iterate through string and check for A-Z
    for (size_t i = 0; i < s.length(); ++i) {
        ch = s[i];
        
        if (ch >= 'a' && ch <= 'z') {
            alphBool[ch - 'a'] = true;

        } else if (ch >= 'A' && ch <= 'Z') {
            alphBool[ch - 'A'] = true; 
        }
    }

    //if every letter in english alphabet present return true
    bool allTrueArr = std::all_of(std::begin(alphBool), std::end(alphBool), [](bool v) { return v; });

    return allTrueArr;
}
