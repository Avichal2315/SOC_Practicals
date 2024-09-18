/*

4444444
4333334
4322234
4321234
4322234
4333334
4444444

*/

#include<bits/stdc++.h>
using namespace std;

void getNumberPattern(int n) {
   
    
    for(int i=0;i<2*n-1;i++)
    {
        for(int j=0;j<2*n-1;j++)
        {
            int s=max(abs(i-n+1),abs(j-n+1));
            cout<<1+s;
        }
        cout<<endl;
    }
}