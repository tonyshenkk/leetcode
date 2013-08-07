//#include <string>
//#include <stack>
//#include <iostream>
//
//using namespace std;
//int longestValidParentheses(string s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (!s.size())
//	{
//		return 0;
//	}
//
//	char c;
//	stack<char> sta;
//	size_t i = 0;
//	int num = 0;
//
//	sta.push(s[i++]);
//	while(i < s.size())
//	{
//		if (s[i] == ')')
//		{
//			if (sta.empty())
//			{
//				return num;
//			}
//			c = sta.top();
//			sta.pop();
//			if (c == '(')
//			{
//				i++;
//				num += 2;
//			}
//			else
//				break;
//		}
//		else
//			sta.push(s[i++]);
//	}
//
//	return num;
//}
//
//int main()
//{
//	string str;
//	cin>>str;
//
//	int num = longestValidParentheses(str);
//
//	cout<<num<<endl;
//
//	return 0;
//}