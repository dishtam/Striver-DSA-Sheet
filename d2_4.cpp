#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int> &nums){
    sort(nums.begin(),nums.end());
    for(int i=1;i<nums.size();i++){
        if(nums[i]==nums[i-1])
            return nums[i];
    }
    return 0;
}

int main(){
    vector<int> arr={3,1,3,4,2};
    cout<<duplicate(arr)<<endl;
}