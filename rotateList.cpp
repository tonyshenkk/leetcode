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
//ListNode *rotateRight(ListNode *head, int k) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (k < 1 || head == NULL)
//	{
//		return head;
//	}
//	int diff = 0, len = 0;
//	int index = 0;
//
//	ListNode *p = head, *q, *r;
//	while(p)
//	{
//		len++;
//		p = p->next;
//	}
//	index = k % len;
//	diff = len - index;
//
//	p = head;
//	while(diff > 1)
//	{
//		p = p->next;
//		diff--;
//	}
//	q = p->next;
//	p->next = NULL;
//
//	if (q)
//	{
//		r = q->next;
//		q->next = head;
//		head = q;
//		p = head;
//		q = r;
//	}
//	while(q)
//	{
//		r = q->next;
//		q->next = p->next;
//		p->next = q;
//		p =q;
//		q = r;
//	}
//	return head;
//}
//
//int main()
//{
//	ListNode *head, *p, *cur;
//	int x = 0, k;
//
//	cin>>x;
//	cur = new ListNode(x);
//	head = cur;
//	//cur = cur->next;
//	while(x != -1)
//	{
//		cin>>x;
//		p = new ListNode(x);
//		cur->next = p;
//		cur = cur->next;
//	}
//
//	cin>>k;
//	p = rotateRight(head, k);
//	while(p)
//	{
//		cout<<p->val<<" ";
//		cur = p;
//		p = p->next;
//		delete cur;
//	}
//
//	return 0;
//
//}