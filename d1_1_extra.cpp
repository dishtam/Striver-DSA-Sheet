#include<bits/stdc++.h>
using namespace std;

void setZero(int *arr,int row,int col){
    int rowArray[row];
    int colArray[col];

    for(int i=0;i<row;i++)
        rowArray[i]=-1;

    for(int j=0;j<col;j++)
        colArray[j]=-1;
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(*((arr+i*col)+j)==0){
                rowArray[i]=0;
                colArray[j]=0;
            }
        }
    }

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(rowArray[i]==0 || colArray[j]==0){
                *((arr+i*col)+j)=0;
            }
        }
    }
}

int main(){
    int t;
    cin>>t;

    while(t>0){
        int row,col;
        cin>>row>>col;

        int arr[row][col];

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cin>>arr[i][j];
            }
        }
        setZero((int *)arr,row,col);

        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        t--;
    }
}