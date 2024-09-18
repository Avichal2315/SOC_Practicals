/*

A phrase is a palindrome if, after converting all uppercase letters into lowercase letters and removing all non-alphanumeric characters, it reads the same forward and backward. Alphanumeric characters include letters and numbers.

Given a string s, return true if it is a palindrome, or false otherwise.

*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
int i=0;
    bool isPalindrome(string s) {
   // Remove non-alphanumeric characters and convert to lowercase
    s.erase(std::remove_if(s.begin(), s.end(), [](char c) {
        return !std::isalnum(static_cast<unsigned char>(c));
    }), s.end());
    
    std::transform(s.begin(), s.end(), s.begin(), [](char c) {
        return std::tolower(static_cast<unsigned char>(c));
    });

    // Check if the string is a palindrome
    int left = 0;
    int right = s.size() - 1;
    while (left < right) {
        if (s[left] != s[right]) {
            return false;
        }
        left++;
        right--;
    }

    return true;
    }
};