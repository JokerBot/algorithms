/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        vector<vector<int> > result;
        
        if(root==NULL){return result;}
        queue<TreeNode*> q;
        
        q.push(root);
        q.push(NULL);
        vector<int> inner;
        while(!q.empty())
        {
            TreeNode *t=q.front();
            q.pop();
            
            if(t==NULL)
            {
                result.push_back(inner);
                if(q.size()>0)
                {
                    inner.clear();
                    q.push(NULL);
                }                
            }
            else
            {
                inner.push_back(t->val);
                if(t->left) q.push(t->left);
                if(t->right) q.push(t->right);
                
            }
       }
     return result;    
    }
};
