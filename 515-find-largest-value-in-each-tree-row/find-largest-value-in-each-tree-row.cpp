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
    vector<int> ans;

    void DFs(TreeNode* rt, int dpth){
        if(rt==NULL){
            return;
        }

        if(dpth == ans.size()){
            ans.push_back(rt->val);
        }
        else{
            ans[dpth] = max(ans[dpth], rt->val);
        }

        DFs(rt->left, dpth+1);
        DFs(rt->right, dpth+1);
    }

    vector<int> largestValues(TreeNode* root) {
        DFs(root,0);
        return ans;
    }
};