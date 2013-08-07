//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void rotate(vector<vector<int> > &matrix) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	for (size_t i = 0, j = matrix.size() - 1; i < j; i++, j--)
//	{
//		swap(matrix[i], matrix[j]);
//	}
//
//	for (size_t i = 0; i < matrix.size(); i++)
//	{
//		for (size_t j = 0; j < i; j++)
//		{
//			swap(matrix[i][j], matrix[j][i]);
//		}
//	}
//}
//
//int main()
//{
//	vector<vector<int>> num;
//	vector<int> temp;
//
//	int n,x;
//	cin>>n;
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cin>>x;
//			temp.push_back(x);
//		}
//		num.push_back(temp);
//		temp.clear();
//	}
//
//	rotate(num);
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			cout<<num[i][j];
//		}
//		cout<<endl;
//	}
//
//	return 0;
//}