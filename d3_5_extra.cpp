#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int countPath(int i,int j,int m,int n,vector<vector<int>>& dp){
            if(i==(m-1) && j==(n-1))    return 1;
            if(i>=m || j>=n)    return 0;
            if(dp[i][j]!=-1)    return dp[i][j];
            else return dp[i][j]= countPath(i+1,j,m,n,dp) + countPath(i,j+1,m,n,dp);
        }
        int uniquePath(int m,int n){
            vector<vector<int>> dp(m+1,vector<int>(n+1,-1));

            int nums = countPath(0,0,m,n,dp);
            if(m==1 && n==1)
                return nums;
            return dp[0][0];
        }
};

int main(){
    Solution obj;
    int ans = obj.uniquePath(1,2);
    cout<<ans<<endl;
}