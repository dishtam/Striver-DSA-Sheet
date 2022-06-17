#include<bits/stdc++.h>
using namespace std;

void mergeArray(vector<int>& arr1,vector<int>& arr2){
    int n=arr1.size();
    int m=arr2.size();

    vector<int> v;
    for(int i=0;i<n;i++)
        v.push_back(arr1[i]);
    for(int j=0;j<m;j++)
        v.push_back(arr2[j]);
    
    sort(v.begin(),v.end());

    arr1.clear();
    arr2.clear();
    
    for(int i=0;i<m+n;i++){
        if(i<n){
            arr1.push_back(v[i]);
        }

        if(i>=n && i<m+n){
            arr2.push_back(v[i]);
        }
    }
}

int main(){
    vector<int> arr1={1,4,8,10};
    vector<int> arr2={2,3,9};

    mergeArray(arr1,arr2);

    for(int i=0;i<arr1.size();i++){
        cout<<arr1[i]<<" ";
    }
    cout<<endl;    
    for(int i=0;i<arr2.size();i++)
        cout<<arr2[i]<<" ";
}