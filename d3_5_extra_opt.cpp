// Using combination to know the number of unique paths
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int uniquePaths(int n,int m){
            int N = m+n-2;
            int r = m-1;
            double res = 1;

            for(int i=1;i<=r;i++)
                res=res*(N-r+i)/i;
            return (int)res;
        }
};

int main(){
    Solution obj;
    int ans = obj.uniquePaths(3,3);
    cout<<ans<<endl;
}