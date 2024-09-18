/*

*          *
**        **
***      ***
****    ****
*****  *****
************
*****  *****
****    ****
***      ***
**        **
*          *

*/

#include<bits/stdc++.h>
using namespace std;


void symmetry(int n)
 {
     int star=1;
     int space=2*(n-1);
    for(int i=0;i<2*n-1;i++)
    {
        
            for(int k=0;k<star;k++)
            {
                cout<<"* ";
            }

             for(int k=0;k<space;k++)
            {
                cout<<" ";
            }

             for(int k=0;k<star;k++)
            {
                cout<<"* ";
            }

            if(i<(n-1))
            {
                star++;
                space--;
            }
            else{
                star--;
                space++;
            }

            cout<<endl;

        
    }
}