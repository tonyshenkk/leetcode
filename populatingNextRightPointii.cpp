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
//	if (!root)
//	{
//		return;
//	}
//	TreeLinkNode *p = root;
//	TreeLinkNode *q, *r, *t;
//	while(p)
//	{
//		if (p->left && p->right)
//		{
//			r = p->left;
//			p->left->next = p->right;
//			t = p->right;
//		}
//		else if (p->left)
//		{
//			r = p->left;
//			t = p->left;
//		}
//		else if (p->right)
//		{
//			r = p->right;
//			t = p->right;
//		}
//		else
//		{
//			p = p->next;
//			continue;
//		}
//		q = p->next;
//		while(q)
//		{
//			if (q->left && q->right)
//			{
//				q->left->next = q->right;
//				t->next = q->left;
//				t = q->right;
//			}
//			else if (q->left)
//			{
//				t->next = q->left;
//				t = q->left;
//			}
//			else if (q->right)
//			{
//				t->next = q->right;
//				t = q->right;
//			}
//			else
//			{
//				q = q->next;
//				continue;
//			}
//			p = q;
//			q = p->next;
//		}
//		p = r;
//	}
//}
//
//int main()
//{
//	TreeLinkNode *root = new TreeLinkNode(3);
//	TreeLinkNode *p = new TreeLinkNode(9);
//	root->left = p;
//
//	p = new TreeLinkNode(20);
//	root->right = p;
//
//	p = new TreeLinkNode(15);
//	root->right->left = p;
//
//	p = new TreeLinkNode(7);
//	root->right->right = p;
//
//
//	connect(root);
//
//	return 0;
//}