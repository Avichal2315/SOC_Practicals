/*
1 2 3
1 2
1
*/


#include<bits/stdc++.h>
using namespace std;

void nNumberTriangle(int n) {
    
    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=n-i;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
}