#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr){
    vector<vector<int>> ans;
    vector<int> temp;
    int n = arr.size();

    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                temp.clear();
                if(arr[i]+arr[j]+arr[k]==0){
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    temp.push_back(arr[k]);
                }
                if(temp.size()!=0){
                    ans.push_back(temp);
                }
            }
        }
    }
    return ans;
}

int main(){
    vector<int> arr = {-1,0,1,2,-1,-4};

    vector<vector<int>> soln = threeSum(arr);

    for(int i=0;i<soln.size();i++){
        for(int j=0;j<soln[i].size();j++){
            cout<<soln[i][j]<<" ";
        }
        cout<<endl;
    }
}