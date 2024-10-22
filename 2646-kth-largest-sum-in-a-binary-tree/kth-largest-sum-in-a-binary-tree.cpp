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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        if(root==NULL){
            return -1;
        }

        queue<TreeNode*> qt;
        qt.push(root);

        vector<long long> lsum;

        while(!qt.empty()){
            int levelsize = qt.size();
            long long levelsum = 0;

            for(int i=0; i<levelsize; i++){
                TreeNode* node = qt.front();
                qt.pop();
                levelsum += node->val;

                if(node->left){
                    qt.push(node->left);
                }

                if(node->right){
                    qt.push(node->right);
                }
            }
            lsum.push_back(levelsum);
        }
        sort(lsum.rbegin(),lsum.rend());

        if(k>lsum.size()){
            return -1;
        }
        return lsum[k-1];
    }
};