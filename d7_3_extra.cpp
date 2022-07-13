#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> threeSum(vector<int> &arr){
    sort(arr.begin(),arr.end());

    vector<vector<int>> ans;

    for(int i=0;i<arr.size()-2;i++){
        if(i==0 || (i>0 && arr[i]!=arr[i-1])){
            int lo = i+1, hi = arr.size()-1, sum = 0 - arr[i]; // using the logic that a + b + c = 0 , so a+b = -c

            while(lo<hi){
                if(arr[lo] + arr[hi] == sum){
                    vector<int> temp;
                    temp.push_back(arr[i]);
                    temp.push_back(arr[lo]);
                    temp.push_back(arr[hi]);
                    ans.push_back(temp);

                    while(lo<hi && arr[lo] == arr[lo+1])    lo++;
                    while(lo<hi && arr[hi] == arr[hi-1])    hi--;

                    lo++;
                    hi--;
                }
                else if(arr[lo] + arr[hi] < sum)    lo++;
                else    hi--;
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