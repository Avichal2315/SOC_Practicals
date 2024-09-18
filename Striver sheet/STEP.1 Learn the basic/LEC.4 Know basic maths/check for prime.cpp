/*

Given an array arr[] of size n of non-negative integers. Each array element represents the maximum length of the jumps that can be made forward from that element. This means if arr[i] = x, then we can jump any distance y such that y ≤ x.
Find the minimum number of jumps to reach the end of the array starting from the first element. If an element is 0, then you cannot move through that element.
Note:  Return -1 if you can't reach the end of the array.

*/

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// Function to return minimum number of jumps to end of array

class Solution{
  public:
    int minJumps(int arr[], int n){
        // Your code here
        int count=0;
        int curr=0;
        int temp=0;
        for(int i=0;i<n;i)
        {
            if(i+arr[i]>=(n-1))
            {
                return ++count;
            }else if(arr[i]==0)
            {
                return -1;
            }
            int max=0;
            curr=arr[i];
            for(int j=i+1+temp;j<=curr;j++)
            {
                if((arr[j]+j)>=max)
                {
                    max=arr[j]+j;
                    i=j;
                }
                
            }
            temp=i+arr[i];
           // cout<<i<<" "<<arr[i]<<endl;
            count++;
        }
        
        return count;
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,i,j;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];
        Solution obj;
        cout<<obj.minJumps(arr, n)<<endl;
    }
    return 0;
}

// } Driver Code Ends