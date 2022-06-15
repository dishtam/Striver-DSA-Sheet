#include<bits/stdc++.h>
using namespace std;

int fact(int n){
    if(n==0)
        return 1;
    return n*fact(n-1);
}

int main(){
    int t;
    cin>>t;

    while(t>0){
        int n;
        cin>>n;

        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                cout<<(fact(i)/(fact(i-j)*fact(j)))<<" ";
            }
            cout<<endl;
        }
        t--;
    }
}