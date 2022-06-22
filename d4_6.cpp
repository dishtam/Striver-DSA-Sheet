// Finding longest sub-string
#include<bits/stdc++.h>
using namespace std;

int longestSubstring(string s){
    int maxLen=INT_MIN;
    for(int i=0;i<s.length();i++){
        unordered_set<int> st;
        for(int j=i;j<s.length();j++){
            if(st.find(s[j])!=st.end()){
                maxLen = max(maxLen,j-i);
                break;
            }
            st.insert(s[j]);
        }
    }
    return maxLen;
}

int main(){
    string s="abcdabcd";
    cout<<longestSubstring(s);
}