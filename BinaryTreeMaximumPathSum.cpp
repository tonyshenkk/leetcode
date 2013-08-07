//struct TreeNode { 
//	int val; 
//	TreeNode *left; 
//	TreeNode *right; 
//	TreeNode(int x) : val(x), left(NULL), right(NULL) {} 
//};   
//
//int calLen(TreeNode *root, int &len)  
//{  
//	if (root == NULL)  
//	{  
//		len = 0;  
//		return 0;  
//	}  
//
//	if (root->left == NULL && root->right == NULL)  
//	{  
//		len = root->val;  
//		return root->val;  
//	}  
//
//	int leftPath, rightPath;  
//	int leftLen;  
//	if (root->left)  
//		leftLen = calLen(root->left, leftPath);  
//	else  
//	{  
//		leftLen = INT_MIN;  
//		leftPath = 0;  
//	}  
//
//	int rightLen;  
//	if (root->right)  
//		rightLen = calLen(root->right, rightPath);  
//	else  
//	{  
//		rightLen = INT_MIN;  
//		rightPath = 0;  
//	}  
//
//	len = max(max(leftPath, rightPath) + root->val, root->val);  
//	int maxLen = max(root->val, max(leftPath + rightPath + root->val,   
//		max(leftPath + root->val, rightPath + root->val)));  
//
//	return max(max(leftLen, rightLen), maxLen);  
//}  
//
//int maxPathSum(TreeNode *root) {  
//	// Start typing your C/C++ solution below  
//	// DO NOT write int main() function  
//	int len;  
//	return calLen(root, len);  
//}  