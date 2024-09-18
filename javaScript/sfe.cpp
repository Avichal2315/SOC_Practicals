#include<bits/stdc++.h>
using namespace std;
#include<vector>

void reverse(vector<int>& v)
{
    if(v.empty()) return;
   int a=v.front();
   v.erase(v.begin());
   reverse(v);
   v.push_back(a);

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

    reverse(vec);

    for(int i=0;i<n;i++)
    {
        cout<<vec[i]<<" ";
    }

}