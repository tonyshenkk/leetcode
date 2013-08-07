//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int lengthOfLongestSubstring(string s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int i = 0, j = 0;
//	int maxlen = 0;
//
//	int t, index, index1 = -1;
//
//	for (t = 0; t < s.length(); t++)
//	{
//		index = t-1;
//		while(index > index1 && s.at(index) != s.at(t))
//		{
//			index--;
//		}
//		index1 = index;
//		if (t - index > maxlen)
//		{
//			maxlen = t - index;
//			i = index + 1;
//			j = t;
//		}
//	}
//	//cout<<s.substr(i,maxlen);
//	return maxlen;
//}
//
//int main()
//{
//	string s;
//	cin>>s;
//
//	int len;
//	len = lengthOfLongestSubstring(s);
//
//	cout<<len<<endl;
//
//	return 0;
//}