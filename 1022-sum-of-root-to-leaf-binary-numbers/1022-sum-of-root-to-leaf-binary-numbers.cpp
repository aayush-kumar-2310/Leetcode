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
    int sumRootToLeaf(TreeNode* r, int val=0) {
        if (r == nullptr) return 0;
          val = ((val << 1) + r->val) % 1000000007;
          return (r->left == r->right ? val : sumRootToLeaf(r->left, val) + sumRootToLeaf(r->right, val)) % 1000000007;
    }
};