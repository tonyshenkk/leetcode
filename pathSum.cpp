//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//    TreeNode *right;
//TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//bool hasPathSum(TreeNode *root, int sum) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if(!root)
//		return false;
//	else if(root->val == sum && !root->left && !root->right)
//		return true;
//
//	sum -= root->val;
//	return hasPathSum(root->left, sum) || hasPathSum(root->right, sum);
//
//}