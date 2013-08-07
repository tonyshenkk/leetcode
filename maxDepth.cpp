//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};

//int maxDepth(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if(!root)
//		return 0;
//	return max(maxDepth(root->left), maxDepth(root->right)) + 1;
//}