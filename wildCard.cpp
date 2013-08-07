//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isMatch(const char *s, const char *p) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (*p == 0)
//	{
//		return *s == *p;
//	}
//	else if (*p == '?')
//	{
//		if (*s != 0)
//		{
//			return isMatch(s+1, p + 1);
//		}
//		else
//			return false;
//	}
//	else if (*p == '*')
//	{
//		const char *st = s;
//		for (; *st != '\0'; st++)
//		{
//			if (isMatch(st, p + 1))
//			{
//				return true;
//			}
//		}
//		return isMatch(st, p+1);
//	}
//	else 
//	{
//		if (*s != *p)
//		{
//			return false;
//		}
//		return isMatch(s+1, p+1);
//	}
//}
////char cs = *s;
////char cp = *p;
////if(cp == '\0') 
////{
////	return cs == cp;
////} 
////else if (cp == '?') 
////{
////	if (cs == '\0') return false;
////	return isMatch(s + 1,p + 1);
////} 
////else if (cp == '*') 
////{
////	const char *st = s;
////	for(; *st != '\0'; ++st) {
////		if (isMatch(st, p+1)) return true;
////	}
////	return isMatch(st,p+1);
////} 
////else if (cp != cs)
////return false;
////return isMatch(s + 1,p + 1);
//
//int main()
//{
//	string s, p;
//
//	cin>>s>>p;
//
//	bool a = isMatch(s.c_str(), p.c_str());
//
//	cout<< a;
//	return 0;
//}