#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node *next; // pointer type node because node be of type node
};

int main()
{
    // created 3 pointers of type node with value null
    node *head = NULL;
    node *second = NULL;
    node *third = NULL;

    // allocate 3 nodes in the heap
    head = new node();
    second = new node();
    third = new node();

    // allocate values
    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    return 0;
}