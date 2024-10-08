/*

Given an array arr[] of n positive integers which can contain integers from 1 to p where elements can be repeated or can be absent from the array.
Your task is to count the frequency of all numbers from 1 to n. Do modify the array in-place changes in arr[], such that arr[i] = frequency(i) and assume 1-based indexing.

Note: The elements greater than n in the array can be ignored for counting. 

*/

#include <bits/stdc++.h>
using namespace std;

//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std; 

// } Driver Code Ends
class Solution{
    public:
    //Function to count the frequency of all elements from 1 to N in the array.
    void frequencyCount(vector<int>& arr,int n, int P)
    { 
        // code here
         long size=arr.size();
        arr.resize(size+n,0);
        
        for(int i=0;i<size;i++)
        {
            
            if(arr[i]<=n)
            {
            arr[size-1+arr[i]]++;               //2 3 2 3 5 0 0 0 0 0
            
            }
            
            
            
        }
        arr.erase(arr.begin(),arr.begin()+n);   //0 2 2 0 5
    }
};


//{ Driver Code Starts.

int main() 
{ 
	long long t;
	
	//testcases
	cin >> t;
	
	while(t--){
	    
	    int N, P;
	    //size of array
	    cin >> N; 
	    
	    vector<int> arr(N);
	    
	    //adding elements to the vector
	    for(int i = 0; i < N ; i++){
	        cin >> arr[i]; 
	    }
        cin >> P;
        Solution ob;
        //calling frequncycount() function
		ob.frequencyCount(arr, N, P); 
		
		//printing array elements
	    for (int i = 0; i < N ; i++) 
			cout << arr[i] << " ";
	    cout << endl;
	}	
	return 0; 
}





// } Driver Code Ends
