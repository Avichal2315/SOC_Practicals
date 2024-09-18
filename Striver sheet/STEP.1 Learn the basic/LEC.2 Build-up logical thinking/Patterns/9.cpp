/*

  *
 ***
*****
*****
 ***
  *
  
*/


#include<bits/stdc++.h>
using namespace std;

void nStarDiamond(int n) {
    int space=n-1;
    int star=1;

   for(int i=0;i<2*n;i++)
   {
       for(int j=0;j<space;j++)
       {
           cout<<" ";
       }
       for(int j=0;j<star;j++)
       {
           cout<<"*";
       }
       cout<<endl;
       if(i<(n-1))
       {
           space=space-1;
           star=star+2;
       }
       else if(i>(n-1))
       {
           space=space+1;
           star=star-2;
       }
      
   }
   }
