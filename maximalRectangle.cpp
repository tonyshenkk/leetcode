//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int maximalRectangle(vector<vector<char> > &matrix) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int row = matrix.size();
//
//	if (row < 1)
//		return 0;
//	vector<int> temp(matrix[0].size(), 0);
//	vector<vector<int>> flag(row, temp);	
//
//	for (int i = 0; i < row; i++)
//	{
//		if (matrix[i][0] == '1')
//			flag[i][0] = 1;
//		for (int j = 1; j < matrix[i].size(); j++)
//		{
//			if (matrix[i][j] == '1')
//				flag[i][j] = flag[i][j - 1] + 1;
//		}
//	}
//
//	int area = 0, maxArea = 0, h,w = INT_MAX, k;
//	for (int j = 0; j < matrix[0].size(); j++)
//	{
//		for (int i = 0; i < row; i++)
//		{
//			h = 0;
//			w = INT_MAX;
//			k = i;
//			while(k < row && flag[k][j])
//			{
//				w = min(flag[k][j], w);
//				area = max(area, w * (k++ - i + 1));
//			}
//			if (area > maxArea)
//			{
//				maxArea = area;
//			}
//			
//		}
//	}
//	return maxArea;
//}
//
//int main()
//{
//	int m, n;
//	cin>>m>>n;
//
//	vector<char> temp(n, '0');
//	vector<vector<char>> matrix(m, temp);
//
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin>>matrix[i][j];
//		}
//	}
//
//	int t = maximalRectangle(matrix);
//
//	cout<<t;
//
//	return 0;
//}