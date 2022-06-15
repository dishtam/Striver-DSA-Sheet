#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> printPascals(int n){
    vector<vector<int>> arr(n);

    for(int i=0;i<n;i++){
        arr[i].resize(i+1);
        arr[i][0]= arr[i][i] =1;
        for(int j=1;j<i;j++){
            arr[i][j] = arr[i-1][j-1] + arr[i-1][j];
        }
    }
    return arr;
}

int main(){
    int t;
    cin>>t;

    while(t>0){
        int n;
        cin>>n;
        vector<vector<int>> ans = printPascals(n);

        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
        t--;
    }
}