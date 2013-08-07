//#include <vector>
//
//using namespace std;
//
//struct TreeNode {
//	int val;
//	TreeNode *left;
//    TreeNode *right;
//TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//bool pathSum(TreeNode *root, int sum, vector<vector<int>> &res, vector<int> &temp)
//{
//	if (!root)
//	{
//		return false;
//	}
//	else if (root->val == sum && !root->left && !root->right)
//	{
//		temp.push_back(root->val);
//		res.push_back(temp);
//		temp.pop_back();
//		return true;
//	}
//
//	temp.push_back(root->val);
//	sum -= root->val;
//	pathSum(root->left, sum, res, temp);
//	pathSum(root->right, sum, res, temp);
//	temp.pop_back();
//}
//
//vector<vector<int> > pathSum(TreeNode *root, int sum) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<vector<int>> res;
//	vector<int> temp;
//	pathSum(root, sum, res, temp);
//
//	return res;
//
//}
//
//int main()
//{
//	TreeNode *root = new TreeNode(1);
//	TreeNode *p = new TreeNode(2);
//	root->left = p;
//
//	int sum = 3;
//	vector<vector<int>> res = pathSum(root, sum);
//
//	return 0;
//}