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
    pair<TreeNode*, int> DFS(TreeNode* temp){
        if(!temp){
            return {NULL, 0};
        }

        auto l = DFS(temp->left);
        auto r = DFS(temp->right);

        if(l.second > r.second){
            return {l.first, l.second+1};
        }
        if(r.second > l.second){
            return {r.first, r.second+1};
        }
        return {temp, l.second+1};
    }

    TreeNode* lcaDeepestLeaves(TreeNode* root) {
        return DFS(root).first;
    }
};