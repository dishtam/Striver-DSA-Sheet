// Dutch National Flag Algorithm 
// Three pointer approach

// LOGIC:

/*

if arr[mid]==0 {arr[low]<--->arr[mid], low++,mid++}
if arr[mid]==1 {mid++}
if arr[mid]==2 {arr[mid]<--->arr[high],high--}

*/

#include<bits/stdc++.h>
using namespace std;

void sortColors(vector<int>& nums){
    int low = 0;
    int high = nums.size()-1;
    int mid = 0;

    while(mid<=high){
        switch(nums[mid]){
            case 0:
                swap(nums[low],nums[mid]);
                low++;
                mid++;
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(nums[mid],nums[high]);
                high--;
                break;
        }
    }
}

int main(){
    vector<int> arr={2,0,2,1,1,0};
    sortColors(arr);

    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}