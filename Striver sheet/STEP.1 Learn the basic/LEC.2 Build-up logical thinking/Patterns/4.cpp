/*
1
2 2 
3 3 3
*/


#include<bits/stdc++.h>
using namespace std;

void triangle(int n) {
	
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++)
		cout<<i+1<<" ";
		cout<<endl;
	}
}