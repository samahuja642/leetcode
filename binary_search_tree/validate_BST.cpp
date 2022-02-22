// Attempt # 1
// As We Tree's inorder traversal also gives you sorted list and then we can compare the sorted and original list and if they will be equal then its valid.
// Complexity Analysis
// Space Complexity -> O(N)
// Time Complexity -> O(N * LogN)

// Code
class Solution{
public:
    vector<int>temp;
    void inorder(TreeNode*root){
        if(root==NULL)return;
        inorder(root->left);
        temp.push_back(root->val);
        inorder(root->right);
    }
    bool isValidBST(TreeNode* root) {
        this->inorder(root);
        vector<int> there = temp;
        sort(there.begin(),there.end());
        for(int i=0;i<temp.size()-1;i++){
            if(temp[i]==temp[i+1])return false;
        }
        for(int i=0;i<temp.size();i++){
            if(there[i]!=temp[i])return false;
        }
        return true;
    }
};
