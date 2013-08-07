//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//void setZeroes(vector<vector<int> > &matrix) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	size_t row = matrix.size();
//	if (row < 1)
//	{
//		return;
//	}
//	size_t col = matrix[0].size();
//	bool zr = false,zc = false;
//	for (int i = 0; i < row;i++)
//	{
//		if (matrix[i][0] == 0)
//		{
//			zc = true;
//		}
//	}
//	for (int i = 0; i < col; i++)
//	{
//		if (matrix[0][i] == 0)
//		{
//			zr = true;
//		}
//	}
//	for (int i = 1; i < row; i++)
//	{
//		for (int j = 1; j < col; j++)
//		{
//			if (matrix[i][j] == 0)
//			{
//				matrix[i][0] = 0;
//				matrix[0][j] = 0;
//			}
//		}
//	}
//	for (int i = 1; i < row; i++)
//	{
//		if (matrix[i][0] == 0)
//		{
//			for (int j = 1; j < col; j++)
//			{
//				matrix[i][j] = 0;
//			}
//		}
//	}
//	for (int i = 1; i < col; i++)
//	{
//		if (matrix[0][i] == 0)
//		{
//			for (int j = 1; j < row; j++)
//			{
//				matrix[j][i] = 0;
//			}
//		}
//	}
//	if (zr)
//	{
//		for (int i = 0; i < col; i++)
//			matrix[0][i] = 0;
//	}
//	if (zc)
//	{
//		for (int i = 0; i< row; i++)
//		{
//			matrix[i][0] = 0;
//		}
//	}
//}
//
//int main()
//{
//	unsigned int m, n;
//	cin>>m>>n;
//
//	vector<int> temp(n, 0);
//	vector<vector<int>> mat(m, temp);
//	for (int i = 0; i< m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin>>mat[i][j];
//		}
//	}
//
//	setZeroes(mat);
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout<<mat[i][j]<<" ";
//		}
//	}
//	return 0;
//}