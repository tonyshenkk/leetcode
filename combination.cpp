//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//void chose(int i, int n, int k, vector<vector<int>> &res, vector<int> &temp)
//{
//	if (k == 0)
//	{
//		res.push_back(temp);
//		//temp.clear();
//		return;
//	}
//	for (int j = i; j <= n - k + 1;j++)
//	{
//		temp.push_back(j);
//		chose(j + 1, n, k - 1, res, temp);
//		temp.pop_back();
//	}
//}
//
//vector<vector<int> > combine(int n, int k) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<vector<int>> res;
//	if (k > n)
//	{
//		return res;
//	}
//	vector<int> temp;
//
//	chose(1, n , k, res, temp);
//	return res;
//}
//
//int main()
//{
//	int n, k;
//	vector<vector<int>> res;
//
//	cin>>n>>k;
//
//	res = combine(n, k);
//
//	for (size_t i = 0; i < res.size(); i++)
//	{
//		for (size_t j = 0; j < res[0].size(); j++)
//		{
//			cout<<res[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}