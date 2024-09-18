/*

*
**
***
**
*

*/




#include<bits/stdc++.h>
using namespace std;

void nStarTriangle(int n) {
    
    int star=1;
    for(int i=0;i<2*n;i++)
    {
            for(int j=0;j<star;j++)
            {
                cout<<"*";
            }
            cout<<endl;
            if(i<(n-1))
            {
                star=star+1;
            }       
            else
            {
                star=star-1;    
            }
    }
}
