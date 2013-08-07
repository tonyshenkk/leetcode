//#include <vector>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//bool check(string s1, string s2, string s3, int end1, int end2, int end3)
//{
//	if (end3 < 0)
//	{
//		return true;
//	}
//	else if (end1 < 0)
//	{
//		return s2.substr(0, end2 + 1) == s3.substr(0, end3 + 1);
//	}
//	else if (end2 < 0)
//	{
//		return s1.substr(0, end1 + 1) == s3.substr(0, end3 + 1);
//	}
//
//	if (s1.at(end1) != s3.at(end3) && s2.at(end2) != s3.at(end3))
//	{
//		return false;
//	}
//	else if (s1.at(end1) == s3.at(end3) && s2.at(end2) != s3.at(end3))
//	{
//		return check(s1.substr(0, end1), s2, s3.substr(0, end3), end1 - 1, end2, end3 - 1);
//	}
//	else if (s1.at(end1) != s3.at(end3) && s2.at(end2) == s3.at(end3))
//	{
//		return check(s1, s2.substr(0, end2), s3.substr(0, end3), end1, end2 - 1, end3 - 1);
//	}
//	else
//		return check(s1.substr(0, end1), s2, s3.substr(0, end3), end1 - 1, end2, end3 - 1) ||
//		check(s1, s2.substr(0, end2), s3.substr(0, end3), end1, end2 - 1, end3 - 1);
//
//}
//
//bool isInterleave(string s1, string s2, string s3) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function    
//	int len1 = s1.length();
//	int len2 = s2.length();
//	int len3 = s3.length();
//
//	if (len3 != len2 + len1)
//		return false;
//	return check(s1, s2, s3, len1 - 1, len2 - 1, len3 - 1);
//}
//
//int main()
//{
//	string s1, s2, s3;
//	cin>>s1>>s2>>s3;
//
//	bool b = isInterleave(s1, s2, s3);
//
//	cout<<b;
//
//	return 0;
//}