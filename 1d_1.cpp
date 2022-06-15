// Making two temporary array , rowArray and colArray and setting their values to 0 if we find arr[i][j]==0
// Time complexity is O(m*n + m*n)

#include<bits/stdc++.h>
using namespace std;

void setZeros(vector<vector<int>> &arr){
    int row = arr.size();
    int col = arr[0].size();

    vector<int> rowArray(row,-1),colArray(col,-1);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(arr[i][j]==0){
                rowArray[i]=0;
                colArray[j]=0;
            }
        }
    }    

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(rowArray[i]==0 || colArray[j]==0){
                arr[i][j]=0;
            }
        }
    }
}

int main(){
    vector< vector<int> > arr = {{0,1,2,0},{3,4,5,2},{1,3,1,5}};

    int row = arr.size();
    int col = arr[0].size();

    setZeros(arr);

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
