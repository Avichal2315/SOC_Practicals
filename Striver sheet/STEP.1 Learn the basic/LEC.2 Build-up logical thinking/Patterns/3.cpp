/*
1
1 2 
1 2 3
*/




#include<bits/stdc++.h>
using namespace std;

void nTriangle(int n) {
	// Write your code here
	for(int i=0;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<j<<" ";
		}
		cout<<endl;
	}
}