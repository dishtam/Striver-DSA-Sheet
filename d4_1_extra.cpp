#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums,int target){
    unordered_map<int,int> mp;
    vector<int> res;

    for(int i=0;i<nums.size();i++){
        if(mp.find(target-nums[i]) != mp.end()){
            res.emplace_back(i);
            res.emplace_back(mp[target-nums[i]]);
            return res;
        }
        mp[nums[i]]=i;
    }
    return res;
}

int main(){
    vector<int> arr={2,3,1,4};
    vector<int> ans = twoSum(arr,4);

    for(auto it:ans){
        cout<<it<<" ";
    }
    cout<<endl;
}