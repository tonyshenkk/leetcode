//struct ListNode {
//	int val;
//	ListNode *next;
//	ListNode(int x) : val(x), next(NULL) {}
////};
//
//ListNode *mergeKLists(vector<ListNode *> &lists) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int nSize = lists.size();
//	if (nSize == 0) return NULL;
//	if (nSize == 1) return lists[0];
//
//	ListNode* result = new ListNode(0);
//	ListNode* cur = result;
//	ListNode* minNode = NULL;
//	int empty = 0;
//	while(empty < nSize)
//	{
//		int j = 0;
//		int no = -1;
//		for (int i = 0; i < nSize; ++i)
//		{
//			if (lists[i] != NULL)
//			{
//				minNode = lists[i];
//				j = i + 1;
//				no = i;
//				break;
//			}
//			j = i + 1;
//		}
//
//		for (int k = j; k < nSize; ++k)
//		{
//			if (lists[k] != NULL && lists[k]->val < minNode->val)
//			{
//				minNode = lists[k];
//				no = k;
//			}
//		}
//
//		if (no < 0)
//			return result->next;
//
//		cur->next = minNode;
//		cur = cur->next;
//
//		lists[no] = lists[no]->next;
//		if (lists[no] == NULL)
//			++empty;
//	}
//
//	return result->next;
//}