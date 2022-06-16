#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int> &nums){
    int countZ=0,countO=0,countT=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]==0)  
            countZ++;
        else if(nums[i]==1)  
            countO++;
        else  
            countT++;
    }

    for(int i=0;i<nums.size();i++){
        if(countZ>0){
            nums[i]=0;
            countZ--;
        }
        else if(countZ==0 && countO>0){
            nums[i]=1;
            countO--;
        }
        else if(countZ==0 && countO==0 && countT>0){
            nums[i]=2;
            countT--;
        }

    }
}

int main(){
    vector<int> nums={2,0,2,1,1,0};
    sortColors(nums);

    for(int i =0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}