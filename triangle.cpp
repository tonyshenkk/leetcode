#include <vector>
#include <iostream>

using namespace std;

//extended time limit
//int minTotal(vector<vector<int> > &triangle, int row, int col)
//{
//	if(row >= triangle.size() || col >= triangle[row].size())
//		return 0;
//	return triangle[row][col] + min(minTotal(triangle, row + 1, col), minTotal(triangle, row + 1, col + 1));
//}
//int minimumTotal(vector<vector<int> > &triangle) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	return minTotal(triangle, 0, 0);
//}


//more quickly
//int minimumTotal(vector<vector<int> > &triangle) 
//{
//	size_t len = triangle.size();
//	if (len < 1)
//	{
//		return 0;
//	}
//	//else if (len == 1)
//	//{
//	//	return triangle[0][0];
//	//}
//	vector<vector<int>> temp = triangle;
//	for (int i = len - 1; i > 0; i--)
//	{
//		for (size_t j = 0; j < temp[i].size() - 1;j++)
//		{
//			temp[i - 1][j] += min(temp[i][j], temp[i][j + 1]);
//		}
//	}
//	return temp[0][0];
//}
//
//int main()
//{
//	vector<vector<int>> res;
//	int n,x;
//	cin>>n;
//	for (int i = 0; i < n; i++)
//	{
//		vector<int> temp;
//		for (int j = 0; j <= i; j++)
//		{
//			cin>>x;
//			temp.push_back(x);
//		}
//		res.push_back(temp);
//	}
//
//	x = minimumTotal(res);
//
//	return 0;
//}