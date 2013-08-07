//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<vector<int> > generate(int numRows) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<vector<int>> res;
//	if (numRows < 1)
//	{
//		return res;
//	}
//
//	vector<int> temp(1, 1);
//	res.push_back(temp);
//
//	for (int i = 2; i <= numRows; i++)
//	{
//		temp.clear();
//		temp.push_back(1);
//		for (int j = 1; j < res[i - 2].size(); j++)
//		{
//			temp.push_back(res[i - 2][j - 1] + res[i - 2][j]);
//		}
//		temp.push_back(1);
//		res.push_back(temp);
//	}
//
//	return res;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//
//	vector<vector<int>> res = generate(n);
//
//	return 0;
//}