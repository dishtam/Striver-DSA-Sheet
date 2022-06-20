// Using set we find the longest sequence

#include<bits/stdc++.h>
using namespace std;

int lonSeq(vector<int>& nums){
    set<int> hashset;

    for(auto it:nums)
        hashset.insert(it);

    int longestSeq=0;
    for(auto num:nums){
        if(hashset.count(num-1)==0){
            int curNum = num;
            int curseq = 1;
            while(hashset.count(curNum+1)){
                curNum += 1;
                curseq += 1;
            }
            longestSeq = max(longestSeq,curseq);
        }
    }
    return longestSeq;
}

int main(){
    vector<int> arr={200,100,1,3,2,4};
    cout<<lonSeq(arr);
}