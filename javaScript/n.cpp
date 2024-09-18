#include<bits/stdc++.h>
using namespace std;


int main()
{
    priority_queue<int> pq;

    cout<<"enter number of elements :";
    int n;
    cin>>n;

    cout<<"enter elements :";
    for(int i=0;i<n;i++)
    {
        int a;
        cin>>a;

        pq.push(a);
    }
        cout<<"\n\n";

     for(int i=0;i<n;i++)
     {
     cout<<pq.top()<<" ";
     pq.pop();
     }
}