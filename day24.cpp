#include <bits/stdc++.h>
using namespace std;

class TreeNode {
public:   // 👈 important, otherwise everything is private
    int val;
    TreeNode* left;
    TreeNode* right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if (!root || root == p || root == q) return root;

        TreeNode* leftLCA = lowestCommonAncestor(root->left, p, q);
        TreeNode* rightLCA = lowestCommonAncestor(root->right, p, q);

        if (leftLCA && rightLCA) return root;
        return leftLCA ? leftLCA : rightLCA;
    }
};

int main() {
    // Build small tree for testing
    TreeNode* root = new TreeNode(3);
    root->left = new TreeNode(5);
    root->right = new TreeNode(1);
    root->left->left = new TreeNode(6);
    root->left->right = new TreeNode(2);

    Solution sol;
    TreeNode* p = root->left;     // 5
    TreeNode* q = root->right;    // 1

    TreeNode* lca = sol.lowestCommonAncestor(root, p, q);
    cout << "LCA of " << p->val << " and " << q->val << " is: " << lca->val << endl;

    return 0;
}
