//#include <iostream>
//
//using namespace std;
//
//bool isMatch(const char *s, const char *p) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function 
//	if (*p == '\0') return *s == '\0';
//	if (*(p+1) != '*') {
//		if (*p == *s || *p == '.' && (*s) != '\0') return isMatch(s+1, p+1);
//		return false;
//	}
//	else {
//		while (*p == *s || *p == '.' && (*s) != '\0') {
//			if (isMatch(s, p+2)) return true;
//			s++;
//		}
//		return isMatch(s, p+2);
//	}
//}
//int main()
//{
//	char s[] = "aa";
//	char p[] = "a.";
//
//	bool m;
//
//	m = isMatch(s, p);
//
//	cout<<m<<endl;
//
//	return 0;
//}