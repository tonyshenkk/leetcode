//#include <vector>
//
//using namespace std;
//struct TreeNode {
//	int val;
//	TreeNode *left;
//	TreeNode *right;
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
//};
//
//TreeNode *build(vector<int> &preorder,int prelow, int prehigh, vector<int> &inorder, int inlow, int inhigh)
//{
//	if (prehigh <= prelow)
//	{
//		return NULL;
//	}
//	TreeNode *root = new TreeNode(preorder[prelow]);
//
//	size_t i = prelow + 1, j = inlow;
//
//	while(i < prehigh && j < inhigh)
//	{
//		if (preorder[prelow] == inorder[j])
//		{
//			break;
//		}
//		i++;
//		j++;
//	}
//
//	root->left = build(preorder, prelow + 1, i, inorder, inlow,j);
//	root->right = build(preorder, i, prehigh, inorder, j + 1, inhigh);
//
//	return root;
//
//}
//
//TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
//	return build(preorder,0, preorder.size(), inorder, 0, inorder.size());
//}

////more memory
//TreeNode *buildTree(vector<int> &preorder, vector<int> &inorder) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (preorder.size() < 1)
//	{
//		return NULL;
//	}
//	TreeNode *root = new TreeNode(preorder[0]);
//
//	vector<int> pre, pre1, in, in1;
//	size_t i = 0, j = 1;
//	while(i < inorder.size() && j < preorder.size())
//	{
//		if (inorder[i] == preorder[0])
//		{
//			break;
//		}
//		pre.push_back(preorder[j]);
//		in.push_back(inorder[i]);
//		i++;
//		j++;
//	}
//	i++;
//	while(i < inorder.size() && j < preorder.size())
//	{
//		pre1.push_back(preorder[j]);
//		in1.push_back(inorder[i]);
//		i++;
//		j++;
//	}
//	root->left = buildTree(pre, in);
//	root->right = buildTree(pre1, in1);
//
//	return root;
//}

//int main()
//{
//	vector<int> pre, in;
//	pre.push_back(1);
//	in.push_back(1);
//
//	TreeNode * root = buildTree(pre, in);
//
//	return 0;
//}