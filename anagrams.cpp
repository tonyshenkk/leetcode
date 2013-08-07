//#include <string>
//#include <vector>
//#include <map>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//vector<string> anagrams(vector<string> &strs) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<string> temp, res;
//	map<string, int> h;
//	temp = strs;
//	for (size_t i = 0; i < temp.size(); i++)
//	{
//		sort(temp[i].begin(), temp[i].end());
//		h[temp[i]]++;
//	}
//	map<string, int>::iterator ite = h.begin();
//
//	for (; ite != h.end(); ite++)
//	{
//		if (ite->second > 1)
//		{
//			for (size_t i = 0; i < temp.size(); i++)
//			{
//				if (temp[i] == ite->first)
//				{
//					res.push_back(strs[i]);
//				}
//			}
//		}
//	}
//
//	return res;
//}
//
//int main()
//{
//	string st;
//	int n;
//	cin>>n;
//	vector<string> strs;
//
//	while(n > 0)
//	{
//		cin>>st;
//		n--;
//		strs.push_back(st);
//	}
//
//	vector<string> res = anagrams(strs);
//
//	for (size_t i = 0; i < res.size(); i++)
//	{
//		cout<<res[i]<<endl;
//	}
//
//	return 0;
//}