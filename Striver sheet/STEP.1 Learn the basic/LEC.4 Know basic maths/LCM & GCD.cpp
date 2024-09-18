/*

Given two integers a and b, write a function lcmAndGcd() to compute their LCM and GCD. The function takes two integers a and b as input and returns a list containing their LCM and GCD.

*/

//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<long long> lcmAndGcd(long long A , long long B)
    {
        vector<long long> soln;
        if(A==B)
        {
            soln.push_back(A);
            soln.push_back(B);
            
            return soln;
        }
        else
        {
            long b=A*(A>B)+B*(B>A);
            long s=A*(A<B)+B*(B<A);
            long t=s;
            long u=b;
            int i=1;
            long hcf;
            
            while(u%s!=0)
            {
                long r=u%s;
                u=s;
                s=r;
            }
        
           
            
           
          
            
            soln.push_back((A*B)/s);
            soln.push_back(s);
        }
        
        return soln;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long A,B;
        
        cin>>A>>B;

        Solution ob;
        vector<long long> ans = ob.lcmAndGcd(A,B);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}
// } Driver Code Ends