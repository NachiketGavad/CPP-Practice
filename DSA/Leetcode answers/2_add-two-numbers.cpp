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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        // calculate sum & carry for first node
        int sum=l1->val + l2->val,carry=0;
        if(sum>9){
            carry=1;
            sum=sum%10;
        }
        else{
            carry=0;
        }

        // creation of first node
        // finalans for storing address of ans
        ListNode *ans=new ListNode(sum),*finalans=ans;
        l1=l1->next;
        l2=l2->next;

        // traverse till both lists have not null value
        while(l1 && l2){
            sum=l1->val + l2->val+carry;
            if(sum>9){
                carry=1;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            ListNode *nextnode=new ListNode(sum);
            ans->next=nextnode;
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
        }

        // traverse remaining part of first
        while(l1){
            sum=l1->val+carry;
            if(sum>9){
                carry=1;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            ListNode *nextnode=new ListNode(sum);
            ans->next=nextnode;
            ans=ans->next;
            l1=l1->next;
        }
        
        // traverse remaining part of second
        while(l2){
            sum= l2->val+carry;
            if(sum>9){
                carry=1;
                sum=sum%10;
            }
            else{
                carry=0;
            }
            ListNode *nextnode=new ListNode(sum);
            ans->next=nextnode;
            ans=ans->next;
            l2=l2->next;
        }

        // check for carry
        if(carry>0){
            ListNode *nextnode=new ListNode(carry);
            ans->next=nextnode;
        }

        // return final answer
        return finalans;
    }
};