/*

Print numbers from N to 1 (space separated) without the help of loops.

*/
#include<bits/stdc++.h>
using namespace std;



class Solution {
  public:
    void printNos(int N) {
        // code here
        if(N==0)return ;
        cout<<N<<" ";
        printNos(N-1);
    }
};