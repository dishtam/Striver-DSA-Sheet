// Optimized solution
// Run a lopp for arr1
// Compare element of arr1 with first element of arr2, if greater swap both of them
// Rearrange arr2
// Repeat the process

#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>& nums1,vector<int>& nums2){
    for(int i=0;i<nums1.size();i++){
        if(nums1[i]>nums2[0]){
            swap(nums1[i],nums2[0]);
            sort(nums2.begin(),nums2.end());
        }
    }
}

int main(){
    vector<int> arr1={1,4,8,10};
    vector<int> arr2={2,3,9};

    merge(arr1,arr2);
    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;    
    for(int i=0;i<arr2.size();i++)
        cout<<arr2[i]<<" ";
}