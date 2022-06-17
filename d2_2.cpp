#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> merge(vector<vector<int>>& intervals){
    vector<vector<int>> v1;

    for(int i=0;i<intervals.size();i++){
        vector<int> v2;
        if(v1.empty() || v1.back()[1] < intervals[i][0]){
            v2={
                intervals[i][0],intervals[i][1]
            };
            v1.push_back(v2);
        }else{
            v1.back()[1] = max(v1.back()[1],intervals[i][1]);
        }
    }
    return v1;
}

int main(){
    vector<vector<int>> arr={{1,3},{2,4},{2,6},{8,9},{8,10},{9,11},{15,18},{16,17}};

    vector<vector<int>> ans = merge(arr);
    for(auto it : ans){
        cout<<it[0]<<" "<<it[1]<<"\n";
    }   
}