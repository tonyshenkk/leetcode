//#include <string>
//#include <iostream>
//
//using namespace std;
//
//string countAndSay(int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	string pre = "1";
//	string res = "1";
//	int len;
//	int sum;
//
//	if (n < 1)
//	{
//		return "";
//	}
//
//	while (n > 1)
//	{
//		res = "";
//		len = pre.length();
//		for (int j = 0, i = 0; i < len;)
//		{
//			sum = 0;
//			for (j = i; j < len; j++)
//			{
//				if (pre.at(i) == pre.at(j))
//				{
//					sum++;
//				}
//				else
//					break;
//			}
//			res += sum + '0';
//			res += pre.at(i);
//			i= j;
//		}
//		pre = res;
//		n--;
//	}
//	return res;
//}
//
//int main()
//{
//	string re;
//
//	int n;
//	cin>>n;
//	re = countAndSay(n);
//	cout<<re;
//
//	return 0;
//}