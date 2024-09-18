/*

Given an integer N, return true it is an Armstrong number otherwise return false.

An Amrstrong number is a number that is equal to the sum of its own digits each raised to the power of the number of digits.

*/

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"enter ";
    cin>>n;

    int temp=n;
    int count=0;
    while(temp!=0)
    {
        temp=temp/10;
        count++;
    }
    int sum=0;
    while(n!=0)
    {
        int r=n%10;
        sum=sum+pow(r,count);
        n=n/10;
        cout<<sum<<" "<<n<<" "<<pow(r,count)<<endl;
    }

    cout<<sum;

}