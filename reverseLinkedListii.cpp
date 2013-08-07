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
//ListNode *reverseBetween(ListNode *head, int m, int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (m < 1 || m >= n)
//		return head;
//	ListNode *h = new ListNode(0);
//	h->next = head;
//	ListNode *p = h, *q, *r;
//	while(m != 1 && p)
//	{
//		m--;
//		p = p->next;
//		n--;
//	}
//	q = p->next;
//	while(n && q)
//	{
//		q = q->next;
//		n--;
//	}
//	r = q;
//	ListNode *t = p->next;
//	p->next = r;
//	while(t != q)
//	{
//		r = t->next;
//		t->next = p->next;
//		p->next = t;
//		t = r;
//	}
//	p = h->next;
//	delete h;
//	return p;
//}
//
//int main()
//{
//	ListNode *l1 = NULL, *l2 = NULL, *p;
//
//	int m, n;
//	cin>>m>>n;
//
//	int x = 0;
//	while(x != -1)
//	{
//		cin>>x;
//		p = new ListNode(x);
//		p->next = l1;
//		l1 = p;
//	}
//	l2 = reverseBetween(l1->next, m, n);
//
//	return 0;
//}