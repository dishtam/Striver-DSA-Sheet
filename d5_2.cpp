#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data = data;
        next = NULL;
    }
};
struct LinkedList{
    Node* head;
    LinkedList(){
        head = NULL;
    }
    void push(int data){
        Node* temp = new Node(data);
        temp->next = head;
        head = temp;
    }
};

class Solution{
    public:
        Node* middleNode(Node* head){
            int n = 0;
            Node* temp = head;
            while(temp!=NULL){
                n++;
                temp = temp->next;
            }
            temp = head;
        }
        for(int i=0;i<n/2;i++)
            temp = temp->next;
        return temp;
};

int main(){
    LinkedList ll;
    ll.push(1);
    ll.push(2);
    ll.push(3);
    ll.push(4);
    ll.push(5);
    ll.push(6);
}
