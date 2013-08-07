//#include <iostream>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//    TreeNode *right;
//TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//int height(TreeNode *root)
//{
//	if(!root)
//		return 0;
//	return max(height(root->left), height(root->right)) + 1;
//}
//bool isBalanced(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if(!root)
//		return true;
//	int l = height(root->left);
//	int r = height(root->right);
//
//	if(abs(l - r) < 2 && isBalanced(root->left) && isBalanced(root->right))
//		return true;
//	else
//		return false;
//}