//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int uniquePathsWithObstacles(vector<vector<int> > &obstacleGrid) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (obstacleGrid[0][0])
//	{
//		return 0;
//	}
//	vector<vector<int>> matrix = obstacleGrid;
//
//	matrix[0][0] = 1;
//	int row = matrix.size();
//	int col = matrix[0].size();
//	for (size_t i = 1; i < row; i++)
//	{
//		if (obstacleGrid[i][0])
//		{
//			matrix[i][0] = 0;
//		}
//		else
//			matrix[i][0] = matrix[i -1][0];
//	}
//	for (size_t i = 1; i < col; i++)
//	{
//		if (obstacleGrid[0][i])
//		{
//			matrix[0][i] = 0;
//		}
//		else
//			matrix[0][i] = matrix[0][i - 1];
//	}
//
//	for (size_t i = 1; i < row; i++)
//	{
//		for (size_t j = 1; j < col; j++)
//		{
//			if (obstacleGrid[i][j])
//			{
//				matrix[i][j] = 0;
//				continue;
//			}
//			if (!obstacleGrid[i-1][j])
//			{
//				matrix[i][j] += matrix[i -1][j];
//			}
//			if (!obstacleGrid[i][j - 1])
//			{
//				matrix[i][j] += matrix[i][j - 1];
//			}
//		}
//	}
//	return matrix[row - 1][col - 1];
//}
//
//int main()
//{
//	int num;
//
//	int m,n;
//	cin>>m>>n;
//
//	vector<int> temp(n, 0);
//	vector<vector<int>> obstacle(m, temp);
//
//	cin>>m>>n;
//	while(m != -1 && n != -1)
//	{
//		obstacle[m][n] = 1;
//		cin>>m>>n;
//	}
//
//	num = uniquePathsWithObstacles(obstacle);
//
//	cout<<num;
//	return 0;
//}