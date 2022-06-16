class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        cin.tie(0);
        cout.tie(0);
        
        if(root!=NULL){
            ans.push_back(root->val);
            preorderTraversal(root->left);
            preorderTraversal(root->right);
        }
        
        return ans;
    }
};