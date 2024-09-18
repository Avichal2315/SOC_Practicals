/*

Given a signed 32-bit integer x, return x with its digits reversed. If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).

 

*/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int reverse(int x) {
    int a=1;
       
        if(x<0)
         {
         x=abs(x);
         a=(-1);
         }
         long rev = 0;
         long temp=x;
         
         
         
        while (temp != 0) {
            rev = rev * 10 + (temp % 10);
            temp = temp / 10;
        }
        rev=rev*a;
        if((rev>pow(2,31)-1) || (rev<(-pow(2,31))))
        {
            return 0;
        }
        return rev;
    }
};

