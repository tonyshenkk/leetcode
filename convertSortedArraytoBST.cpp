//#include <vector>
//#include <queue>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//TreeNode* build(vector<int> &num, int low, int high)
//{
//	if (low >= high)
//	{
//		return NULL;
//	}
//
//	int mid = (low + high) >> 1;
//	TreeNode *root = new TreeNode(num[mid]);
//	root->left = build(num, low, mid);
//	root->right = build(num, mid + 1, high);
//
//	return root;
//}
//
//TreeNode *sortedArrayToBST(vector<int> &num) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	return build(num, 0, num.size());
//}