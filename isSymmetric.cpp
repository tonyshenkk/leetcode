//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//bool isSymmetric(TreeNode *root1, TreeNode *root2)
//{
//	if(!root1 && !root2)
//		return true;
//	else if(root1 && root2)
//	{
//		return (root1->val == root2->val) && isSymmetric(root1->left, root2->right) && isSymmetric(root1->right, root2->left);
//	}
//	else
//	{
//		return false;
//	}
//}