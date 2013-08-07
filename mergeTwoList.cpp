//#include <iostream>
//using namespace std;
//
//struct ListNode {
//   int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
// 
//ListNode *mergeTwoLists(ListNode *l1, ListNode *l2) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (!l1)
//	{
//		return l2;
//	}
//	if (!l2)
//	{
//		return l1;
//	}
//	ListNode *head, *p, *p1 = l1, *p2 = l2;
//	if (l1->val > l2->val)
//	{
//		head = l2;
//		p2 = l2->next;
//	}
//	else
//	{
//		head = l1;
//		p1 = l1->next;
//	}
//	p = head;
//
//	while(p1 && p2)
//	{
//		if (p2->val > p1->val)
//		{
//			p->next = p1;
//			p = p1;
//			p1 = p1->next;
//		}
//		else
//		{
//			p->next = p2;
//			p = p2;
//			p2 = p2->next;
//		}
//	}
//	if (p1)
//	{
//		p->next = p1;
//	}
//	if (p2)
//	{
//		p->next = p2;
//	}
//	return head;
//}
//
//int main()
//{
//	ListNode *l1 = NULL, *l2 = NULL, *p;
//
//	int x = 0;
//	while(x != -1)
//	{
//		cin>>x;
//		p = new ListNode(x);
//		p->next = l1;
//		l1 = p;
//	}
//
//	x = 0;
//	while(x != -2)
//	{
//		cin>>x;
//		p = new ListNode(x);
//		p->next = l2;
//		l2 = p;
//	}
//
//	p = mergeTwoLists(l1,l2);
//
//	return 0;
//}