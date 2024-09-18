/*

Given an integer x, return true if x is a 
palindrome
, and false otherwise.

*/

#include<iostream>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
        {
            return 0;
        }
        else
        {
        int t=x;
        double rev=0;
        while(x!=0)
        {
            rev=rev*10+(x%10);
            x=x/10;
        }
        return (t==rev);
        }
    }
};

