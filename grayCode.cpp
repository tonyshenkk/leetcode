//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> grayCode(int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<int> res;
//
//	if (n < 0)
//		return res;
//	res.push_back(0);
//
//	while(n)
//	{
//		vector<int> temp = res;
//		int s = 1, t = 0;
//		while(s < temp.size())
//		{
//			s = s<< 1;
//			t++;
//		}
//		for (int i = temp.size() - 1; i > -1; i--)
//		{
//			res.push_back(res[i] + (1 << t));
//		}
//		n--;
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
//	vector<int> res = grayCode(n);
//	for (int i = 0; i < res.size(); i++)
//	{
//		cout<<res[i]<<" ";
//	}
//
//	return 0;
//}