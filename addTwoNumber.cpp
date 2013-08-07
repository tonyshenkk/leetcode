//#include <iostream>
//
//using namespace std;
//
//struct ListNode 
//{
//     int val;
//     ListNode *next;
//     ListNode(int x) : val(x), next(NULL) {}
//};
//
//ListNode *addTwoNumbers(ListNode *l1, ListNode *l2) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	ListNode *p = new ListNode(0);
//	ListNode *head = p, *q;
//	ListNode *p1= l1, *p2 = l2;
//	int flag = 0;
//
//	while(p1 && p2)
//	{
//		q = new ListNode(p1->val + p2->val + flag);
//		if (q->val > 9)
//		{
//			q->val -= 10;
//			flag = 1;
//		}
//		else
//			flag = 0;
//		p->next = q;
//		p = p->next;
//		p1 = p1->next;
//		p2 = p2->next;
//	}
//	while(p1)
//	{
//		q = new ListNode(p1->val + flag);
//		if (q->val > 9)
//		{
//			q->val -= 10;
//			flag = 1;
//		}
//		else
//			flag = 0;
//		p->next = q;
//		p = p->next;
//		p1 = p1->next;
//	}
//	while(p2)
//	{
//		q = new ListNode(p2->val + flag);
//		if (q->val > 9)
//		{
//			q->val -= 10;
//			flag = 1;
//		}
//		else
//			flag = 0;
//		p->next = q;
//		p = p->next;
//		p2 = p2->next;
//	}
//	while(flag)
//	{
//		q = new ListNode(flag);
//		flag = 0;
//
//		p->next = q;
//		p = p->next;
//	}
//	p = head->next;
//	delete head;
//	head = p;
//	return head;
//}
//int main()
//{
//	ListNode *l1;
//	ListNode *l2;
//	ListNode *p;
//
//	p = new ListNode(2);
//	l1 = p;
//
//	p = new ListNode(8);
//	l2 = p;
//	
//	p = new ListNode(9);
//	l2->next = p;
//
//	p = addTwoNumbers(l1, l2);
//
//	while(p)
//	{
//		cout<<p->val<<endl;
//		p = p->next;
//	}
//
//	return 0;
//}