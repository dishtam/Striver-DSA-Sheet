#include<bits/stdc++.h>
#include<unordered_set>
using namespace std;

int solve(string str){
    int maxLen = INT_MIN;
    unordered_set<int> st;
    int left=0,right=0;

    while(right<str.length()){
        if(st.find(str[right])!=st.end()){
            while(left<right && st.find(str[right])!=st.end()){
                st.erase(str[left]);
                left++;
            }
        }
        st.insert(str[right]);
        maxLen = max(maxLen,right-left+1);
        right++;
    }
    return maxLen;
}

int main(){
    string str = "abcd";
    cout<<solve(str);
    return 0;
}