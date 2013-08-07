//struct TreeNode {
//	int val;
//	TreeNode *left;
//    TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
// };
//
//bool isSameTree(TreeNode *p, TreeNode *q) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if(!p || !q )
//	{
//		if(p==q)
//			return true;
//		else
//			return false;
//	}
//	else
//		return (p->val == q->val) && isSameTree(p->left, q->left) && isSameTree(p->right, q->right);
//}