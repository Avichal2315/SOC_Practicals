/*

apply merge sort to the given unsorted array.

*/

//{ Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


// } Driver Code Ends
class Solution
{
    public:
     void merge(int arr[], int l, int m, int r) {
        vector<int> temp;
        int low = l, high = m + 1;

        // Merging the two halves into temp array
        while (low <= m && high <= r) {
            if (arr[low] <= arr[high]) {
                temp.push_back(arr[low]);
                low++;
            } else {
                temp.push_back(arr[high]);
                high++;
            }
        }

        // Copy remaining elements of the left half, if any
        while (low <= m) {
            temp.push_back(arr[low]);
            low++;
        }

        // Copy remaining elements of the right half, if any
        while (high <= r) {
            temp.push_back(arr[high]);
            high++;
        }

        // Copy the merged elements back into the original array
        for (int i = l; i <= r; i++) {
            arr[i] = temp[i - l];
        }
    }

    void mergeSort(int arr[], int l, int r) {
        if (l >= r) return;
        int m = l + (r - l) / 2;

        mergeSort(arr, l, m);
        mergeSort(arr, m + 1, r);
        merge(arr, l, m, r);
    }
};

//{ Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}
// } Driver Code Ends