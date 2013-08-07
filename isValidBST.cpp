//struct TreeNode {
//	int val;
//	TreeNode *left;
//    TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//bool isBST(TreeNode *root, int *a)
//{
//	if (!root)
//	{
//		return true;
//	}
//	bool lflag = false, rflag = false;
//	lflag = isBST(root->left, a);
//	if (lflag && *a < root->val)
//	{
//		*a = root->val;
//	}
//	else
//		return false;
//	rflag = isBST(root->right, a);
//
//	return lflag && rflag;
//}
//bool isValidBST(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int a = INT_MIN;
//	return isBST(root, &a);
//}
