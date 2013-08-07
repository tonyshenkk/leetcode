//#include <iostream>
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//    ListNode(int x) : val(x), next(NULL) {}
//};
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//    TreeNode *right;
//TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//TreeNode* build(ListNode* head, int len)
//{
//	if (len < 1)
//	{
//		return NULL;
//	}
//
//	int mid = len >> 1;
//	ListNode *p = head;
//	while(mid > 0)
//	{
//		p = p->next;
//		mid--;
//	}
//
//	TreeNode *root = new TreeNode(p->val);
//	root->left = build(head, len>>1);
//	root->right = build(p->next, len - 1 -(len>>1));
//
//	return root;
//}
//
//TreeNode *sortedListToBST(ListNode *head) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	ListNode *p = head;
//	int len = 0;
//	while(p)
//	{
//		len++;
//		p = p->next;
//	}
//
//	p = head;
//	return build(p, len);
//}
//
//int main()
//{
//	ListNode *head = new ListNode(1);
//	ListNode *p = new ListNode(3);
//	head->next = p;
//
//	TreeNode *root = sortedListToBST(head);
//
//	return 0;
//}