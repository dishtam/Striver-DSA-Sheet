// We can easily solve this problem using frequency table or by interating two times
// The algorithm used in this solution is known as Moore's Voting Algorithm

                /*-----------MOORE'S VOTING ALGORITHM-------*/

/*
Initialize 2 variables: 

    Count –  for tracking the count of element
    Element – for which element we are counting

Traverse through nums array.

    If Count is 0 then initialize the current traversing integer of array as Element 
    If the traversing integer of array and Element are same increase Count by 1
    If they are different decrease Count by 1

The integer present in Element is the result we are expecting 
*/

#include<bits/stdc++.h>
using namespace std;

int majorityElement(vector<int>& arr){
    int count = 0;
    int element = 0;

    for(auto it:arr){
        if(count==0){
            element = it;
        }
        
        if(it==element){
            count+=1;
        }else{
            count-=1;
        }
    }
    return element;
}

int main(){
    vector<int> arr={4,4,2,4,3,4,4,3,2,4};
    cout<<majorityElement(arr);
}