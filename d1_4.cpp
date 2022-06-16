#include<bits/stdc++.h>
using namespace std;

int maxSubArray(vector<int>& nums){
    int maxSum = INT_MIN;
    int curSum = nums[0];
    for(int i=0;i<nums.size();i++){
        curSum+=nums[i];
        if(curSum>maxSum){
            maxSum = curSum;
        }
        else if(curSum<0){
            curSum = 0;
        }
    }
    return maxSum;
}

int main(){{
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    cout<<maxSubArray(arr)<<endl;

}}
