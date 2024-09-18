/*

Given an integer n, calculate the sum of series 13 + 23 + 33 + 43 + … till n-th term.

*/

 #include<bits/stdc++.h>
 using namespace std;
 
class Solution {
  public:
    long long sumOfSeries(long long n) {
       
        return ((n*(n+1))/2)* ((n*(n+1))/2);
    } 
};