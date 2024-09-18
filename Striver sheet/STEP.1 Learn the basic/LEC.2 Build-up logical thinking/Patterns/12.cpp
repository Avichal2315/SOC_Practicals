/*

1         1
1 2     2 1
1 2 3 3 2 1

*/

#include<bits/stdc++.h>
using namespace std;

void numberCrown(int n) {
    for(int i=0;i<n;i++)
    {
        int num=1;
        int k=0;
        for(int j=0;j<2*n;j++)
        {
            if(j>i&&j<2*n-1-i)
            {
                cout<<" ";
            }
            else
            {
                cout<<num;
            }

            if(j<(n-1))
            {
                num++;
            }
            else if(j>(n-1))
            {
                num--;
            }
            cout<<" ";
        }
        cout<<endl;
    }
}