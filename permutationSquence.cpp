//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
////string getPermutation(int n, int k) {
////	// Start typing your C/C++ solution below
////	// DO NOT write int main() function
////	if (n <1 || k < 1)
////	{
////		return "";
////	}
////	int n1 = 1;
////	vector<int> num;
////
////	for (int i =1; i< n; i++)
////	{
////		n1 *= i;
////		num.push_back(i);
////	}
////	if (k > n1*n)
////	{
////		return "";
////	}
////	num.push_back(n);
////	int p;
////	string s = "";
////	int i = n-1;
////	k = k -1;
////	while(!(p = (k) / n1) && n1>0)
////	{
////		s += num[0] + '0';
////		num.erase(num.begin());
////		n1 = n1 / i;
////		i--;
////	}
////	vector<int>::iterator ite = num.begin();
////	while( p = (k) / n1)
////	{
////		ite = num.begin();
////		s+=num[p] + '0';
////		ite += p;
////		num.erase(ite);
////		k = k % n1;
////		n1 = n1 / i;
////		i--;
////	}
////	while(num.size())
////	{
////		s+=num[0] + '0';
////		num.erase(num.begin());
////	}
////	return s;
////}
//
//string getPermutation(int n, int k) 
//{
//	if (n < 1 || k < 1)
//	{
//		return "";
//	}
//	int n1 = 1;
//	vector<int> num;
//	int i;
//
//	for (i = 1; i <= n; i++)
//	{
//		n1 *= i;
//		num.push_back(i);
//	}
//
//	i = n;
//	n1 = n1 / i--;
//
//	k = k -1;
//	string s = "";
//	vector<int>::iterator ite;
//
//	while(k)
//	{
//		int p = k / n1;
//		s += num[p] + '0';
//		ite = num.begin() + p;
//		num.erase(ite);
//
//		if (p)
//		{
//			k = k % n1;
//		}
//		n1 = n1 / i--;
//	}
//	ite = num.begin();
//	while(ite != num.end())
//	{
//		s+= *ite + '0';
//		ite++;
//	}
//	return s;
//}
//
//int main()
//{
//	int n,k;
//	string s;
//
//	cin>>n>>k;
//
//	s = getPermutation(n, k);
//
//	cout<<s;
//
//	return 0;
//}