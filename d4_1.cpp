#include<bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int>& nums,int target){
    vector<int> temp,res;
    temp = nums;

    sort(temp.begin(),temp.end());

    int left = 0;
    int right = nums.size()-1;
    int n1,n2;

    while(left<=right){
        if(temp[left]+temp[right]==target){
            n1=temp[left];
            n2=temp[right];
            break;
        }
        if(temp[left]+temp[right]>target)
            right--;
        else
            left++;
    } 

    for(int i=0;i<nums.size();i++){
        if(nums[i]==n1)
            res.emplace_back(i);
        if(nums[i]==n2)
            res.emplace_back(i);
    }
    return res;
}

int main(){
    vector<int> arr={2,1,3,4};
    int target = 4;
    vector<int> ans = twoSum(arr,target);

    for(auto it:ans){
        cout<<it<<" ";
    }
}
