/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int count(ListNode* head){
        int c=0;
        ListNode* temp=head;
        while(temp){
            c++;
            temp=temp->next;
        }
        return c;
    }
    
    ListNode* reverse(ListNode* head){
        if(head==NULL){
            return head;
        }
        ListNode *temp=head,*prev=NULL,*next=head;
        
        while(temp){
            next=temp->next;
            temp->next=prev;
            prev=temp;
            temp=next;
        }
        return prev;
    }
    
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL){
            return head;
        }
        int c=count(head);
        
        if(n>c){
            return head;
        }
        
        if(n==1 && c==1){
            return NULL;
        }
        
        head = reverse(head);
        ListNode *temp=head,*prev=head;
        c=1;
        
        if(n==1){
            head=head->next;
        }
        
        while(temp){
            if(c==n){
                prev->next=temp->next;
            }
            prev=temp;
            temp=temp->next;
            c++;
        }
        return reverse(head);
    }
};