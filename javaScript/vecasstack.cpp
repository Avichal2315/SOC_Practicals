#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    for(int i=0;i<10;i++)
    {
        v.push_back(i+1);
    }
    for(int i=0;i<10;i++)
    {
        if(i%2==0)
        {
            cout<<v.back()<<" ";
        }
        v.pop_back();
    }

}