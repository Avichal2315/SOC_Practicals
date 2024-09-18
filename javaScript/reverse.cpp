#include<bits/stdc++.h>
using namespace std;
#include<vector>

void reverse(vector<int>& v,int n)
{
    if(n==0)
    return;

    v.push_back(v.front());
    v.erase(v.begin());
    reverse(v,n-1);

}

int main()
{
    int n;
    cin>>n;
    vector<int> vec;
    for(int i=0;i<n;i++){
    int a;
    cin>>a;
    vec.push_back(a);
    }   

    reverse(vec,n);

    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }

}