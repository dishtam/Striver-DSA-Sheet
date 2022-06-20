#include<bits/stdc++.h>
using namespace std;

int lonSeq(vector<int>& nums){
    int count=1;
    int maxCount=1;
    sort(nums.begin(),nums.end());

    for(int i=1;i<=nums.size();i++){
        if(nums[i]-nums[i-1]==1){
            count++;
            maxCount = max(count,maxCount);
        }else{
            count=1;
        }
    }
    return maxCount;
}

int main(){
    vector<int> arr={3, 8, 5, 7, 6};
    cout<<lonSeq(arr)<<endl;   
}