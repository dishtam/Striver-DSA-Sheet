// Using hash map we can find the largest subarray with zero sum
// Mentaining a subarray and looking if the sum has appeared or not
#include<bits/stdc++.h>
using namespace std;

int maxlen(vector<int>& nums){
    unordered_map<int,int> mpp;
    int n = nums.size();
    int maxi = 0;
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += nums[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mpp.find(sum)!= mpp.end()){
                maxi = max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum]= i;
            }
        }
    }
    return maxi;
}

int main(){
    vector<int> arr = {9, -3, 3, -1, 6, -5};
    cout<<maxlen(arr);
}