//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string addBinary(string a, string b) 
//{
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	string s = "", temp;
//	char c1, c2, c,c3;
//	int flag = 0;
//	int len1 = a.length() - 1, len2 = b.length() -1;
//	for (; len1 >= 0 && len2 >= 0; len1--, len2--)
//	{
//		c1 = a.at(len1) - '0';
//		c2 = b.at(len2) - '0';
//		c = c1 + c2 + flag;
//		if (c > 1)
//		{
//			c = c - 2;
//			flag = 1;
//		}
//		else
//			flag = 0;
//		c = c + '0';
//		s = "0" + s;
//		s.at(0)= c;
//	}
//	while(len1 > -1)
//	{
//		c1 = a.at(len1) - '0';
//		c = c1 + flag;
//		if (c > 1)
//		{
//			c = c -2;
//			flag = 1;
//		}
//		else
//			flag = 0;
//		c += '0';
//		s = "0" + s;
//		s.at(0)= c;
//		len1--;
//	}
//	while(len2 > -1)
//	{
//		c2 = b.at(len2) - '0';
//		c = c2 + flag;
//
//		if (c > 1)
//		{
//			c -= 2;
//			flag = 1;
//		}
//		else
//			flag = 0;
//		c += '0';
//		s = "0" + s;
//		s.at(0)= c;
//		len2--;
//	}
//	if (flag)
//	{
//		/*sprintf(&c3, "%d", flag);*/
//		//itoa(flag, cc, 10);
//		s = "0" + s;
//		s.at(0)= '1';
//	}
//	return s;
//}
//
//int main()
//{
//	string s1, s2;
//	cin>>s1>>s2;
//
//	string s = addBinary(s1, s2);
//
//	cout<<s;
//
//	return 0;
//}