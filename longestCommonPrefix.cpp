//#include <vector>
//#include <string>
//
//using namespace std;
//
//string longestCommonPrefix(vector<string> &strs) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	string t = "";
//	int len = strs.size();
//	if (len < 1)
//	{
//		return t;
//	}
//	int minLen = INT_MAX;
//	char c;
//	for (int i = 0; i < len; i++)
//	{
//		if (strs[i].length() < minLen)
//		{
//			minLen = strs[i].length();
//		}
//	}
//	for (int i = 0; i < minLen; i++)
//	{
//		c = strs[0].at(i);
//		for (int j = 1; j < len; j++)
//		{
//			if (strs[j].at(i) != c)
//			{
//				return t;
//			}
//		}
//		t += c;
//	}
//	return t;
//}