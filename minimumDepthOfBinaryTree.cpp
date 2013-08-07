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
//int minDepth(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if(!root)
//		return 0;
//	int left = minDepth(root->left);
//	int right = minDepth(root->right);
//
//	if (left == 0 && right == 0)
//	{
//		return 1;
//	}
//	else if (left == 0 && right != 0)
//	{
//		return right + 1;
//	}
//	else if (right == 0 && left != 0)
//	{
//		return left + 1;
//	}
//	else
//		return min(left, right) + 1;
//}