/*

The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

F(0) = 0, F(1) = 1
F(n) = F(n - 1) + F(n - 2), for n > 1.
Given n, calculate F(n).

*/

#include<bits/stdc++.h>
using namespace std;



class Solution {
public:

   
    
    int fibonacci(int n,vector<int>& v)
    {
    if (v[n] != (-1))
        return v[n];

    if (n == 0)
    {
        v[0] = 0;
        return 0;
    }
    else if (n == 1)
    {
        v[1] = 1;
        return 1;
    }
    else
    {
        v[n] = fibonacci(n - 1, v) + fibonacci(n - 2, v);
    }

    return v[n];


    }

    int fib(int n) {

        vector<int> v(n+1,-1);

         
       int a= fibonacci(n,v);
        

        

        return a;
       
    }
};
