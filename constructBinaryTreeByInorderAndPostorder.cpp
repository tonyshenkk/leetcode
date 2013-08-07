//#include <vector>
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
//TreeNode* build(vector<int> &inorder, int inlow, int inhigh, vector<int> &postorder, int plow, int phigh)
//{
//	if (inlow >= inhigh)
//	{
//		return NULL;
//	}
//
//	int t = postorder[phigh - 1];
//	TreeNode *root = new TreeNode(t);
//
//	int j = inlow;
//	while(j < inhigh)
//	{
//		if (inorder[j] == t)
//		{
//			break;
//		}
//		j++;
//	}
//
//	root->left = build(inorder, inlow, j, postorder, plow, plow + j - inlow);
//	root->right = build(inorder, j +1, inhigh, postorder, plow + j - inlow, phigh - 1);
//
//	return root;
//
//}
//
//TreeNode *buildTree(vector<int> &inorder, vector<int> &postorder) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	return build(inorder, 0, inorder.size(), postorder, 0, postorder.size());
//}
//
//int main()
//{
//	vector<int> pre, in;
//	pre.push_back(2);
//	pre.push_back(1);
//	pre.push_back(3);
//
//	in.push_back(2);
//	in.push_back(3);
//	in.push_back(1);
//
//	TreeNode * root = buildTree(pre, in);
//
//	return 0;
//}