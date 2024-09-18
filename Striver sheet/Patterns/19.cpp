/*

* * * * * * 
* *     * * 
*         * 
*         * 
* *     * * 
* * * * * *

*/
#include <bits/stdc++.h>
using namespace std;

void symmetry(int n) {
    // Write your code here.
    for(int i=0;i<2*n;i++)
    {
        for(int j=0;j<2*n;j++)
        {
            if(j>(n-1)-i && j<(n-1)+i)
            {
                cout<<" ";
            }else{
                cout<<"*";
            }
        }
        cout<<endl;
    }
}

