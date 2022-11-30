class Solution{
public:
    void insertatbottom(stack<int> &St, int num){
        if(St.empty()){
            St.push(num);
            return;
        }
        
        int n=St.top();
        St.pop();
        insertatbottom(St,num);
        St.push(n);
    }
    void Reverse(stack<int> &St){
        if(St.empty()){
            return;
        }
        
        //recursion
        int num=St.top();
        St.pop();
        Reverse(St);
        
        insertatbottom(St,num);
    }
};