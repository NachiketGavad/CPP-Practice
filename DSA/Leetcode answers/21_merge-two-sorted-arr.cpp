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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL){
            return list2;
        }
        if(list2==NULL){
            return list1;
        }
        
        ListNode *i,*j,*head=NULL;
        i=list1;
        j=list2;
        
        if(i->val < j->val){
            head=i;
            i=i->next;
        }
        else{
            head=j;
            j=j->next;
        }
        
        ListNode *temp=head;
        
        while(i!=NULL && j!=NULL){
            if((i->val) < (j->val)){
                temp->next=i;
                i=i->next;
            }
            else{
                temp->next=j;
                j=j->next;
            }
            temp=temp->next;
        }
        if(i!=NULL){
            temp->next=i;
        }
        else{
            temp->next=j;
        }
        return head;
    }
};