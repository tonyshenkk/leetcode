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
//vector<vector<int> > levelOrder(TreeNode *root) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<vector<int>> res;
//	if (!root)
//	{
//		return res;
//	}
//
//	queue<TreeNode*> s1, s2;
//	s1.push(root);
//	TreeNode *p;
//
//	while(!s1.empty() || !s2.empty())
//	{
//		vector<int> temp;
//
//		while(!s1.empty())
//		{
//			p = s1.front();
//			if (p)
//			{
//				s2.push(p->left);
//				s2.push(p->right);
//				temp.push_back(p->val);
//			}
//			s1.pop();
//		}
//		if (temp.size())
//		{
//			res.push_back(temp);
//		}
//		temp.clear();
//		while(!s2.empty())
//		{
//			p = s2.front();
//			if (p)
//			{
//				s1.push(p->left);
//				s1.push(p->right);
//				temp.insert(temp.begin(), 1, p->val);
//			}
//			s2.pop();
//		}
//		if (temp.size())
//		{
//			res.push_back(temp);
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	TreeNode *root = new TreeNode(1);
//	TreeNode *p = new TreeNode(2);
//	root->left = p;
//
//	vector<vector<int>> res = levelOrder(root);
//
//	return 0;
//}