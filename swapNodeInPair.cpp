//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
//};
//ListNode *swapPairs(ListNode *head) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (head == NULL || head->next == NULL)
//		return head;
//
//	ListNode* last = new ListNode(0);
//	last->next = head;
//	ListNode* p1 = head;
//	ListNode* p2 = NULL;
//	ListNode* pre = NULL;
//	head = last;
//
//	while(p1 != NULL && p1->next != NULL)
//	{
//		p2 = p1->next;
//		pre = p2->next;
//		last->next = p2;
//		p2->next = p1;
//		p1->next = pre;
//		last = p1;
//		p1 = pre;
//	}
//	return head->next;
//}