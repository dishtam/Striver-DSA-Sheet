#include<bits/stdc++.h>
using namespace std;

void subArraySum(vector<int> &arr){
    int maxSum = INT_MIN;
    int start,end=0;
    int curSum = arr[0];
    for(int i=0;i<arr.size();i++){
        curSum = curSum+arr[i];

        if(curSum<0){
            curSum=0;
        }

        if(curSum>maxSum){
            maxSum=curSum;
            end=i;
        }
    }
    cout<<maxSum<<endl;
}

int main(){
    vector<int> arr={-2,1,-3,4,-1,2,1,-5,4};
    subArraySum(arr);
}