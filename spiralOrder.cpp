//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> spiralOrder(vector<vector<int> > &matrix) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<int> res;
//	if (matrix.size() == 0)
//	{
//		return res;
//	}
//	int lu = 0, ru = matrix[0].size() - 1;
//	int ld = 0, rd = matrix.size() - 1;
//
//	while(lu <= ru && lu <= ld && lu < matrix.size() && ru < matrix[0].size())
//	{
//		for (int i = lu; i <= ru && rd >= lu; i++)
//			res.push_back(matrix[lu][i]);
//		lu++;
//		for (int i = lu; i <= rd && ld <= ru; ++i)
//			res.push_back(matrix[i][ru]);
//		ru--;
//		for(int i = ru; i >= 0 && i >= ld && rd >= lu; --i )
//			res.push_back(matrix[rd][i]);
//		rd--;
//		for(int i = rd; i >= 0 && i >= lu && ld <= ru; i--)
//			res.push_back(matrix[i][ld]);
//		ld++;
//	}
//	return res;
//}
//
//int main()
//{
//	vector<vector<int>> matrix;
//
//	int n,m,x;
//	cin>>m>>n;
//
//	for (int i = 0; i < m; i++)
//	{
//		vector<int> temp;
//		for (int j = 0; j < n; j++)
//		{
//			cin>>x;
//			temp.push_back(x);
//		}
//		matrix.push_back(temp);
//	}
//
//	vector<int> t = spiralOrder(matrix);
//
//	for (size_t i = 0; i < t.size(); i++)
//	{
//		cout<<t[i]<<" ";
//	}
//
//	return 0;
//}