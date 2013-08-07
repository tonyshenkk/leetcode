//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int minPathSum(vector<vector<int> > &grid) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<vector<int>> matrix = grid;
//
//	int row = matrix.size();
//	int col = matrix[0].size();
//
//	for (int i= 1; i < row; i++)
//	{
//		matrix[i][0] += matrix[i - 1][0];
//	}
//	for (int i = 1; i < col; i++)
//	{
//		matrix[0][i] += matrix[0][i -1];
//	}
//
//	for (int i = 1; i < row; i++)
//	{
//		for (int j = 1; j < col; j++)
//		{
//			matrix[i][j] = min(matrix[i - 1][j], matrix[i][j - 1]) + grid[i][j];
//		}
//	}
//	return matrix[row - 1][col -1];
//}
//int main()
//{
//	int m, n, num;
//	cin>>m>>n;
//	int x;
//
//	vector<int> temp(n, 0);
//	vector<vector<int>> grid(m, temp);
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin>>x;
//			grid[i][j] = x;
//		}
//	}
//
//	num = minPathSum(grid);
//
//	cout<<num;
//
//	return 0;
//}