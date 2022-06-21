#define ulli unsigned long long int
#define lli long long int
#include<bits/stdc++.h>
using namespace std;

ulli largestRect(vector<lli>& arr){
    int breadth=0;
    int maxArea=0;
    int n = arr.size();

    for(int i=0;i<n;i++){
        int length=0;
        int area=0;
        breadth = arr[i];
        for(int j=0;j<n;j++){
            if(arr[i]<=arr[j]){
                length = length + 1;
                area = length * breadth;
            }else{
                length = 0;
            }
            maxArea = max(maxArea,area);
        }
    }
    return maxArea;
}

int main(){
    vector<lli> arr = {2,5,3,2,1};
    cout<<largestRect(arr)<<endl;
}
