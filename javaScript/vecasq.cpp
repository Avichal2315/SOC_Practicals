#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;

    int a;
    cout<<"enter 10 values";
    for(int i=0;i<10;i++)
    {
        cin>>a;
        mp[a]++;
    }
    for (const auto& pair : mp) {
        cout << "value: " << pair.first << ", Frequency: " << pair.second << endl;
    }
    for(int i=0;i<10;i++)
    {
        cout<<"Enter key to delete"<<endl;
        int b;
        cin >>b;
       
            mp[b]--;

        if(mp[b]==0)
        {
            mp.erase(b);
        }
        

        for (const auto& pair : mp) {
        cout << "value: " << pair.first << ", Frequency: " << pair.second << endl;
    }
    }
}