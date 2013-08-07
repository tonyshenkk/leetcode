//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int> > generateMatrix(int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (n < 1)
//	{
//		vector<vector<int>> res;
//		return res;
//	}
//	vector<int> temp(n, 0);
//	vector<vector<int>> res(n, temp);
//
//	int i = 1;
//	int col = 0, row = 0, leftcol = n, leftrow = n;
//	n = n * n;
//
//	while(i <= n)
//	{
//		for (int j = col; j < leftcol; j++)
//		{
//			res[row][j] = i++;
//		}
//		row++;
//		for (int j = row; j < leftrow; j++)
//		{
//			res[j][leftcol -1] = i++;
//		}
//		for (int j = leftcol - 2; j >= col; j--)
//		{
//			res[leftrow - 1][j] = i++;
//		}
//		for (int j = leftrow - 2; j >= row; j--)
//		{
//			res[j][col] = i++;
//		}
//		col++;
//		leftcol -= 1;
//		leftrow -= 1;
//	}
//	return res;
//}
//int main()
//{
//	int n;
//	cin>>n;
//	vector<vector<int>> res = generateMatrix(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout<< res[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//
//	return 0;
//}