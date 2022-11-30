class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // code here.. 
        stack<int> temp;
        int count=0;
        
        while(count!=(sizeOfStack/2)){
            int num=s.top();
            s.pop();
            temp.push(num);
            count++;
        }
        s.pop();
        while(!temp.empty()){
            int num=temp.top();
            temp.pop();
            s.push(num);
        }
    }
};