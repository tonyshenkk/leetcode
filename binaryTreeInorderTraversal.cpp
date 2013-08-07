#include <vector>
#include <stack>

using namespace std;
struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

//
//void inOrder(vector<int> &res, TreeNode *root)
//{
//	if (root)
//	{
//		inOrder(res, root->left);
//		res.push_back(root->val);
//		inOrder(res, root->right);
//	}
//}
////recursive
//vector<int> inorderTraversal(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<int> res;
//	inOrder(res, root);
//	return res;
//}
//
//vector<int> inorderTraversal(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<int> res;
//	stack<TreeNode*> s;
//
//	while (root || !s.empty())
//	{
//		if (!root)
//		{
//			s.push(root);
//			root = root->left;
//		}
//		else
//		{
//			root = s.top();
//			res.push_back(root->val);
//			s.pop();
//			root = root->right;
//		}
//	}
//
//	return res;
//}
