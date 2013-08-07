//#include <iostream>
//#include <string>
//#include <algorithm>
//
//using namespace std;
//
//bool isScramble(string s1, string s2) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len1 = s1.length(), len2 = s2.length();
//
//	if (len1 != len2 || (len1 < 2 && s1 != s2))
//		return false;
//	if (s1 == s2)
//		return true;
//	else if (isScramble(s1.substr(0, len1/2), s2.substr(0, len1 / 2)) && 
//		isScramble(s1.substr(len1 / 2, len1 - len1 / 2), s2.substr(len1 / 2, len1 - len1 / 2)))
//		return true;
//	else if (isScramble(s1.substr(len1 / 2, len1 - len1 / 2), s2.substr(0, len1 - len1 / 2)) && 
//		isScramble(s1.substr(0, len1 - len1 / 2), s2.substr(len1 / 2, len1 - len1 / 2)))
//		return true;
//	else
//	{
//		string t1 = s1;
//		string t2 = s2;
//		swap(t2.substr(0, len1 / 2), t2.substr(len1 / 2, len1 - len1 / 2));
//		swap(t1.substr(0, len1 / 2), t1.substr(len1 / 2, len1 - len1 / 2));
//		if (isScramble(t1, s2))
//			return true;
//		else if(isScramble(t2, s1))
//				return true;
//		else
//			return false;
//	}
//}
//
//int main()
//{
//	bool t;
//	string s1, s2;
//	cin>>s1>>s2;
//
//	t = isScramble(s1, s2);
//
//	cout<<t;
//
//	return 0;
//}