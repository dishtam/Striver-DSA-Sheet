// Using unordered maps to solve this problem
// Mentaining count of the nums present in the array using maps
#include<bits/stdc++.h>
using namespace std;

vector<int> majElm(vector<int>& arr){
    int n = arr.size();
    unordered_map<int,int> mp;
    vector<int> ans;

    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto it : mp){
        if(it.second>(n/3))
            ans.push_back(it.first);
    }
    return ans;
}

int main(){
    vector<int> arr={11,33,33,11,33,11};
    majElm(arr);

    for(auto it : majElm(arr))
        cout<<it<<" ";
}