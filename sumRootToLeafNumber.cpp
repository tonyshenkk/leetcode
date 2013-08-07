//#include <vector>
//#include <iostream>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//void sumTree(TreeNode *root, vector<int> &temp, int &t)
//{
//	temp.push_back(root->val);
//	if (!root->left && !root->right)
//	{
//		int x = 1;
//		for (int i = temp.size() - 1; i >= 0; i--)
//		{
//			t += temp[i] * x;
//			x = x * 10;
//		}
//		temp.pop_back();
//		return;
//	}
//	if (root->left)
//		sumTree(root->left, temp, t);
//	if (root->right)
//		sumTree(root->right, temp, t);
//	temp.pop_back();
//}
//
//int sumNumbers(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//
//	if (!root)
//	{
//		return 0;
//	}
//	vector<int> temp;
//	int t = 0;
//	sumTree(root, temp, t);
//
//	return t;
//
//}
//
//int main()
//{
//	TreeNode *root = new TreeNode(0);
//	TreeNode *p = new TreeNode(1);
//	root->left = p;
//	p = new TreeNode(3);
//	root->right = p;
//
//	int t = sumNumbers(root);
//
//	cout<<t;
//
//	return 0;
//}