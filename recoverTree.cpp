//#include <string>
//#include <algorithm>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//void findPos(TreeNode *root, TreeNode * &pre, TreeNode * &p, TreeNode * &q)
//{
//	if (!root)
//	{
//		return;
//	}
//	findPos(root->left, pre, p, q);
//	if (pre && pre->val > root->val)
//	{
//		if (!p)
//		{
//			p = pre;
//		}
//		q = root;
//	}
//	pre = root;
//	findPos(root->right, pre, p, q);
//}
//void recoverTree(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	TreeNode *pre, *p, *q;
//	pre = p = q = NULL;
//	findPos(root, pre, p, q);
//	int t = p->val;
//	p->val = q->val;
//	q->val = t;
//	//swap(p->val, q->val);
//}
//
//int main()
//{
//
//}
