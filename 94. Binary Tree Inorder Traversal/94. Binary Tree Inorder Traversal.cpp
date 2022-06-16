class Solution {
public:
    vector<int> v;
    vector<int> inorderTraversal(TreeNode* root) {
        
        cin.tie(0);
        cout.tie(0);
        if(root!=NULL){
            inorderTraversal(root->left);
            v.push_back(root->val);
            inorderTraversal(root->right);
        }
        
        return v;
    }
};