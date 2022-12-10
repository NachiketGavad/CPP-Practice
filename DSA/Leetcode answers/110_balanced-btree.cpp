/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int height(TreeNode* root) {
        if(root ==NULL){
            return 0;
        }

        int left=height(root->left);
        int right=height(root->right);

        return max(left,right)+1;
    }

    bool isBalanced(TreeNode* root) {
        if(root==NULL){
            return true;
        }

        bool left=isBalanced(root->left);
        bool right=isBalanced(root->right);
        bool val=(abs(height(root->left)-height(root->right)))<=1;
        // val=true;

        if(left && right && val){
            return true;
        }
        return false;
    }
    
    pair<bool,int> isBalancedfast(TreeNode* root) {
        if(root==NULL){
            pair<bool,int> p=make_pair(true,0);
            return p;
        }

        pair<bool,int> left=isBalancedfast(root->left);
        pair<bool,int> right=isBalancedfast(root->right);
        bool valu=abs(left.second-right.second)<=1;

        pair<bool,int> ans;
        ans.second=max(left.second,right.second)+1;
        ans.first=left.first && right.first && valu;
        return ans;
    }

    bool isBalanced(TreeNode* root) {
        return isBalancedfast(root).first;
    }
};