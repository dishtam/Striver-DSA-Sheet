// LOGIC:
// Mentaining two variables, minVal and maxProfit and finding the required solution

#include<bits/stdc++.h>
using namespace std;

void maxProfit(vector<int>& nums){
    int minVal = INT_MAX;
    int maxProfit=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]<minVal)
            minVal=nums[i];
        
        int curProfit = nums[i]-minVal;
        if(curProfit>maxProfit)
            maxProfit=curProfit;
    }
    cout<<maxProfit<<endl;
}

int main(){
    vector<int> arr={7,1,5,3,6,4};
    maxProfit(arr);
}
