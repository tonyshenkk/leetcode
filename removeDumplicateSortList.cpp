//#include <iostream>
//
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
// 
//ListNode *deleteDuplicates(ListNode *head) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (head == NULL)
//	{
//		return head;
//	}
//	ListNode *p = head, *q = p->next, *t;
//	while (q)
//	{
//		if (p->val == q->val)
//		{
//			t = q;
//			q = q->next;
//			free(t);
//		}
//		else
//		{
//			p->next = q;
//			q = q->next;
//			p = p->next;
//		}
//	}
//	p->next = NULL;
//	return head;
//}