// This problem can be solved by finding all the possible sub array and then XORing every element 
// in each subarray and finding the target XOR. Time complexity: O(N^2)

// Here in this solution we have used an optimal algorithm to find the XOR
// Y = XORR^B 
#include<bits/stdc++.h>
using namespace std;

class Solution{
    public:
        int solve(vector<int>& A,int B){
            map<int,int> freq;
            int cnt = 0;
            int xorr = 0;
            for(auto it:A){
                xorr = xorr ^ it;
                
                if(xorr == B)
                    cnt++;
                
                if(freq.find(xorr^B)!=freq.end())
                    cnt = cnt + freq[xorr^B];
                
                freq[xorr] += 1;
            }
            return cnt;
        }
};

int main(){
    Solution obj;
    vector<int> arr = {4, 2, 2, 6, 4};
    cout<<obj.solve(arr,6);
}