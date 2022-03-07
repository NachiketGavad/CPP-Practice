class Solution
{
public:
    int removeElement(vector<int>& nums, int val)
    {
        vector<int> ans;
        int i;
        for ( i = 0; i < nums.size(); i++)
        {
            if (nums[i]!=val)
            {
                ans.push_back(nums[i]);
            }
            
        }
        return ans.size();
        
    }
};