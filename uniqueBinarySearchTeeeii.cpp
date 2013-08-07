//#include <vector>
//#include <queue>
//#include <string>
//#include <sstream>
//#include <iostream>
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
//vector<TreeNode*> generate(int beg, int end)
//{
//	vector<TreeNode*> res;
//	if (beg > end)
//	{
//		res.push_back(NULL);
//		return res;
//	}
//
//	for (int i = beg; i <= end; i++)
//	{
//		vector<TreeNode* > leftTree = generate(beg, i-1);
//		vector<TreeNode* > rightTree = generate(i+1, end);
//
//		for (int j = 0; j < leftTree.size(); j++)
//		{
//			for (int k = 0; k < rightTree.size(); k++)
//			{
//				TreeNode *node = new TreeNode(i);
//				res.push_back(node);
//				node->left = leftTree[j];
//				node->right = rightTree[k];
//			}
//		}
//	}
//	return res;
//}
//
//vector<TreeNode *> generateTrees(int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<TreeNode *> res;
//	res = generate(1, n);
//	return res;
//}
//
//int main()
//{
//	vector<TreeNode*> res;
//	int n;
//	cin>>n;
//
//	res = generateTrees(n);
//
//	return 0;
//}