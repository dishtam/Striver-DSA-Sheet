// Using a frequency array we can find the duplicate element
#include<bits/stdc++.h>
using namespace std;

int duplicate(vector<int>& arr){
    vector<int> frequency(arr.size()+1,0);

    for(int i=0;i<arr.size();i++){
        if(frequency[arr[i]]==0){
            frequency[arr[i]]+=1;
        }else{
            return arr[i];
        }
    }

    return 0;
}

int main(){
    vector<int> arr={3,1,3,4,2};
    cout<<duplicate(arr);
}