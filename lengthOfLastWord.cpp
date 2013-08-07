//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int lengthOfLastWord(const char *s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int l = 0;
//	const char *p = s;
//	while(*p)
//	{
//		if (*p != ' ')
//		{
//			l = 0;
//			while(*p && *p != ' ')
//			{
//				l++;
//				p++;
//			}
//		}
//		else
//			p++;
//	}
//	return l;
//}
//
//int main()
//{
//	char s[] = "a";
//
//	int t = lengthOfLastWord(s);
//
//	cout<<t;
//
//	return 0;
//}