//#include <string>
//
//inline int c2n(char c) {
//	switch(c) {
//			case 'I': return 1;
//			case 'V': return 5;
//			case 'X': return 10;
//			case 'L': return 50;
//			case 'C': return 100;
//			case 'D': return 500;
//			case 'M': return 1000;
//			default: return 0;
//	}
//}
//int romanToInt(string s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if(s.size() < 1) return 0;
//	char sb[9] = { 'I','V','X', 'L','C', 'D','M', 'v', 'x' };//v��xӦ���Ǵ�д��������һ��
//	int result = 0;
//	int sub = c2n(s[0]);
//	int lastv = sub;
//	for(int i = 1 ; i < s.size(); ++i) {
//		char curc = s[i];
//		int curv = c2n(curc);
//		if(curv == lastv) 
//			sub += curv;
//		else if( curv < lastv) {
//			result += sub;
//			sub = curv;
//		} else {
//			sub = curv - sub;
//		}
//		lastv = curv;
//	}
//	result += sub;
//	return result;
//}