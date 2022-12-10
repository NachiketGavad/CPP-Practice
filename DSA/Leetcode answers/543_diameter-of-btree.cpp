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

    int diameterOfBinaryTree(TreeNode* root) {
        if(root ==NULL){
            return 0;
        }

        int left=diameterOfBinaryTree(root->left);
        int right=diameterOfBinaryTree(root->right);
        int combi=height(root->left)+height(root->right);

        return max(left,max(combi,right));
    }
    
    pair<int,int> diafast(TreeNode* root) {
        if(root ==NULL){
            pair<int,int> p=make_pair(0,0);
            return p;
        }

        pair<int,int> left=diafast(root->left);
        pair<int,int> right=diafast(root->right);
        pair<int,int> ans=make_pair(0,0);
        int combi=left.second+right.second;
        
        ans.first= max(left.first,max(combi,right.first));
        ans.second=max(left.second,right.second)+1;
        return ans;
    }

    int diameterOfBinaryTree(TreeNode* root) {
        return diafast(root).first;
    }
    
};