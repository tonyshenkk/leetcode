//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void chose(int beg, vector<vector<int>> &res, vector<int> &temp, vector<int> &s)
//{
//	for (int i = beg; i < s.size(); i++)
//	{
//		temp.push_back(s[i]);
//		if (find(res.begin(), res.end(), temp) == res.end())
//			res.push_back(temp);
//		chose(i + 1, res, temp, s);
//		temp.pop_back();
//	}
//}
//
//vector<vector<int> > subsetsWithDup(vector<int> &S) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<vector<int>> res;
//
//	if (S.size() < 1)
//		return res;
//	vector<int> temp;
//	res.push_back(temp);
//	sort(S.begin(), S.end());
//	chose(0, res, temp, S);
//	return res;
//}
//
//int main()
//{
//	int n, t;
//	vector<int> s;
//	cin>>n;
//
//	for (int i = 0; i < n;i++)
//	{
//		cin>>t;
//		s.push_back(t);
//	}
//
//	vector<vector<int>> res = subsetsWithDup(s);
//
//	for (int i = 0; i < res.size(); i++)
//	{
//		for (int j = 0; j < res[i].size(); j++)
//		{
//			cout<<res[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//
//	return 0;
//}