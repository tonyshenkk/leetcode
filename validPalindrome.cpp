//#include <string>
//
//bool isChar(char c)
//{
//	if((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z') || (c >= '0' && c <= '9'))
//		return true;
//	else
//		return false;
//}
//bool isPalindrome(string s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = s.length();
//	if(len < 2)
//		return true;
//	for(int i = 0, j = len - 1; i < j;)
//	{
//		if(!isChar(s[i]))
//		{
//			i++;
//			continue;
//		}
//		if(!isChar(s[j]))
//		{
//			j--;
//			continue;
//		}
//		if(s[i] == s[j] || abs(s[i] - s[j]) == 32)
//		{
//			i++;
//			j--;
//		}
//		else
//			return false;
//	}
//	return true;
//}