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
//ListNode *partition(ListNode *head, int x) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	ListNode *h1 = NULL, *h2 = NULL, *p1 = NULL, *p2 = NULL, *p = head;
//	if (!head)
//	{
//		return NULL;
//	}
//
//	while(p)
//	{
//		if (p->val < x)
//		{
//			if (!h1)
//			{
//				h1 = p;
//				p1=p;
//			}
//			else
//			{
//				p1->next = p;
//				p1 = p;
//			}
//		}
//		else
//		{
//			if (!h2)
//			{
//				h2 = p;
//				p2 = p;
//			}
//			else
//			{
//				p2->next = p;
//				p2 = p;
//			}
//		}
//		p = p->next;
//	}
//	if (h2)
//	{
//		p2->next = NULL;
//	}
//	if (!h1)
//	{
//		h1 = h2;
//	}
//	else
//		p1->next = h2;
//
//	return h1;
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
//	cin>>x;
//	l2 = partition(l1, x);
//
//	return 0;
//}