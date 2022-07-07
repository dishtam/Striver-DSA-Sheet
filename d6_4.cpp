#include<bits/stdc++.h>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};

void insert(node* &head,int val){
    node* n = new node(val);
    if(head==NULL){
        head  = n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next = n;
}

node* reverselist(node* head){
    node* cur = head;
    node* prev = NULL;
    node* next;

    while(cur!=NULL){
        next = cur->next;
        cur->next = prev;
        prev = cur;
        cur = next;
    }
    return prev;


}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

bool isPalindrome(node* head){
    node* temp = head;
    vector<int> hashTable;

    while(temp!=NULL){
        hashTable.push_back(temp->data);
        temp = temp->next;
    }
    int n = hashTable.size();

    for(int i=0;i<n/2;i++){
        if(hashTable[n-1-i]!=hashTable[i])
            return false;
    }
    return true;
}

int main() {
    node* head = NULL;
    insert(head,1);
    insert(head,2);
    insert(head,3);
    insert(head,4);

    display(head);

    bool ans = isPalindrome(head);
    cout<<ans;

}