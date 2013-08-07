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
//	if (head == NULL || head->next == NULL)
//	{
//		return head;
//	}
//	ListNode *p, *h = NULL, *q = head, *t, *pre;
//	while (q->next)
//	{
//		if (q->val == q->next->val)
//		{
//			pre = q;
//			while (q->next && q->val == q->next->val)
//				q = q->next;
//			if (q->next == NULL)
//			{
//				while(pre)
//				{
//					t = pre;
//					pre = pre->next;
//					free(t);
//				}
//				q = NULL;
//				break;
//			}
//			else
//			{
//				q = q->next;
//				while(pre != q)
//				{
//					t = pre;
//					pre = pre->next;
//					free(t);				
//				}
//			}
//
//		}
//		else
//		{
//			if (!h)
//			{
//				h = q;
//				p = h;
//				q = q->next;
//				h->next = NULL;
//			}
//			else
//			{
//				p->next = q;
//				p = q;
//				q = q->next;
//				p->next = NULL;
//			}
//		}
//	}
//	if (q)
//	{
//		if (h == NULL)
//		{
//			h = q;
//			h->next = NULL;
//		}
//		else
//		{
//			p->next = q;
//			p->next->next = NULL;
//		}
//	}
//	return h;
//
//}
//
//int main()
//{
//	ListNode *head = new ListNode(0), *p, *q = head;
//	int n, x;
//	cin>>n;
//	for (int i = 0; i < n; i++)
//	{
//		cin>>x;
//		p = new ListNode(x);
//		q->next = p;
//		q = q->next;
//	}
//
//	head = deleteDuplicates(head->next);
//	p = head;
//
//	while(p)
//	{
//		cout<<p->val<<" ";
//		p = p->next;
//	}
//	return 0;
//}