//#include <iostream>
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//    TreeNode *right;
//TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//TreeNode *build(TreeNode *root)
//{
//	if (!root)
//	{
//		return NULL;
//	}
//	TreeNode *p = root, *q = p, *r = root->right;
//	p->right = build(root->left);
//	p->left = NULL;
//
//	while(p->right)
//		p = p->right;
//	p->right = build(r);
//
//	return q;
//}
//
//void flatten(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	TreeNode *p;
//	p = build(root);
//	root = p;
//}
//
//int main()
//{
//	TreeNode *root = new TreeNode(1);
//	root->left = new TreeNode(2);
//	root->right = new TreeNode(3);
//
//	flatten(root);
//
//	return 0;
//}
//
