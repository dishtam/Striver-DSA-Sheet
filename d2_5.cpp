#include<bits/stdc++.h>
using namespace std;

vector<int> mr(vector<int>& arr){
    vector<int> freq(arr.size()+1,0);
    vector<int> v;

    for(int i=0;i<arr.size();i++){
        if(arr[i]){
            freq[arr[i]]+=1;
        }
    }
    for(int i=1;i<arr.size()+1;i++){
        if(freq[i]==2)
            v.push_back(i);
        if(freq[i]==0)
            v.push_back(i);
    }
    return v;
}

int main(){
    vector<int> arr={3,1,2,5,3};
    vector<int> ans=mr(arr);

    for(auto it:ans){
        cout<<it<<" ";
    }
}