/*
  *
 ***
*****
*/



#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        for (int k = 0; k < 2 * i + 1; k++) 
        {
            cout << "*";
        }
         for(int j=0;j<n-1-i;j++)
        {
            cout<<" ";
        }
        cout<<endl;
    }
}