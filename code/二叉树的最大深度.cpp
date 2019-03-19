//class Solution {
//public:
//	int maxDepth(TreeNode* root) {
//		if (!root) return 0;
//		return 1 + max(maxDepth(root->left), maxDepth(root->right));
//	}
//};
//也可以使用层序遍历二叉树，然后计数总层数，即为二叉树的最大深度
class Solution {
public:
	int maxDepth(TreeNode* root) {
		if (!root) return 0;
		int res = 0;
		queue<TreeNode*> q{ { root } };
		while (!q.empty()) {
			++res;
			for (int i = q.size(); i > 0; --i) {
				TreeNode *t = q.front(); q.pop();
				if (t->left) q.push(t->left);
				if (t->right) q.push(t->right);
			}
		}
		return res;
	}
};