/*



*/

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxFrequency(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        long freq=1;
       long end=0,begin=0,sum=0;

        for(end=0;end<nums.size();end++){
            sum=sum+nums[end];
            while((end-begin+1)*nums[end]-sum > k){
                sum=sum-nums[begin];
                begin++;
            }
            freq=max(freq,(end-begin+1));
        }
    

        return freq;
    }
};