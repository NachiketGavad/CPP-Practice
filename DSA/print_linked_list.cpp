#include <bits/stdc++.h>
using namespace std;
//structure of linked list node:

struct Node
{
    int data;
    Node* next;
    
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

void print_list(Node* head){
    Node *temp=head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
}

int main(){
    Node *head= new Node(1);
    print_list(head);
    return 0;
}