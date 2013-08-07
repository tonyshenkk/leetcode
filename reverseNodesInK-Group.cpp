//struct ListNode { 
//	int val; 
//	ListNode *next; 
//	ListNode(int x) : val(x), next(NULL) {} 
//};
//
//ListNode *reverseKGroup(ListNode *head, int k) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (head == NULL) return NULL;
//
//	ListNode* last = new ListNode(0);
//	last->next = head;
//	head = last;
//	while(last->next != NULL)
//	{
//		// p1,p2指向交换的两个节点
//		ListNode* p1 = last->next;
//		ListNode* p2 = p1;
//		int count = 1;
//		while (count < k && p2->next != NULL)
//		{
//			p2 = p2->next;
//			++count;
//		}
//		if (count == k)
//		{
//			// p0记录交换子链的第一个节点
//			ListNode* p0 = p1;
//			p2 = p1->next;
//			while(count-- > 1)
//			{
//				ListNode* tmp = p2->next;
//				p2->next = p1;
//				p1 = p2;
//				p2 = tmp;
//			}
//			last->next = p1;
//			p0->next = p2;
//			last = p0;
//		}
//		else
//		{
//			break;
//		}
//	}
//	return head->next;
//}