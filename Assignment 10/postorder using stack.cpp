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
vector<int>ans;
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>ans;
        stack<TreeNode*>s;
        if(root)
           s.push(root);
        while(!s.empty()){
            TreeNode* temp=s.top();
            if(temp->left){
                s.push(temp->left);
                temp->left=NULL;
            }
            else{
                if(temp->right){
                    s.push(temp->right);
                    temp->right=NULL;
                }
                else{
                    ans.push_back(temp->val);
                    s.pop();
                }
            }
        }
        return ans;
    }
};
