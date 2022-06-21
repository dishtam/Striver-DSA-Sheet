#include<bits/stdc++.h>
using namespace std;

int longSubarray(vector<int>& nums){
    int maxLen=0;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){
            sum += nums[j];
            if(sum==0){
                maxLen=max(maxLen,j-i+1);
            }
        }
    }
    return maxLen;
}

int main(){
    vector<int> arr={9, -3, 3, -1, 6, -5};
    cout<<longSubarray(arr)<<endl;
}