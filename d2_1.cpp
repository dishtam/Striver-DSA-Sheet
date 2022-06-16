#include<bits/stdc++.h>
using namespace std;

void rotate(vector<vector<int>>& matrix){
    int rows = matrix.size();
    // Taking the transpose of the matrix
    for(int i=0;i<rows;i++){
        for(int j=0;j<i;j++){
            swap(matrix[j][i],matrix[i][j]);
        }
    }
    // Reversing the transpose of the matrix
    for(int i=0;i<rows;i++){
        reverse(matrix[i].begin(),matrix[i].end());
    }
}

int main(){
    vector<vector<int>> arr={
                            {1,2,3},
                            {4,5,6},
                            {7,8,9}
                            };

    rotate(arr);
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr[i].size();j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}