//#include <iostream>
//
//struct TreeLinkNode {
//	int val;
//	TreeLinkNode *left, *right, *next;
//	TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
//};
//
//void connect(TreeLinkNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if(!root)
//		return;
//	TreeLinkNode *p = root;
//	TreeLinkNode *q, *r;
//	while(p->left)
//	{
//		r = p->left;
//		p->left->next = p->right;
//		q = p->next;
//		while(q)
//		{
//			p->right->next = q->left;
//			q->left->next = q->right;
//			p = q;
//			q = p->next;
//		}
//		p = r;
//	}
//}
//
//int main()
//{
//	TreeLinkNode *root = new TreeLinkNode(0);
//
//	connect(root);
//
//	return 0;
//}