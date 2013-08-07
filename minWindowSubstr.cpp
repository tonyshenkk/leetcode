//#include <string>
//#include <iostream>
//int count1[256];
//int count2[256];
//
//using namespace std;
//
//string minWindow(string S, string T) { 
//	int hash1[256] = {0}, hash2[256] = {0};
//	int len1 = S.length(), len2 = T.length();
//	int start = 0, minSize = INT_MAX, minStart, count=0;
//	for (int i = 0; i < len2; i++)
//	{
//		hash1[T[i]]++;
//		hash2[T[i]]++;
//		count++;
//	}
//	for (int end = 0; end < len1; end++)
//	{
//		if (hash1[S[end]] > 0)
//		{
//			hash2[S[end]]--;
//			if (hash2[S[end]] >= 0)
//				count--;
//		}
//		if (count == 0)
//		{
//			while(start < end)
//			{
//				if (hash1[S[start]] > 0)
//				{
//					if (hash2[S[start]] < 0)
//					{
//						hash2[S[start]]++;
//					}
//					else
//						break;
//				}
//				start++;
//			}
//			if (minSize > end - start + 1)
//			{
//				minSize = end - start + 1;
//				minStart = start;
//			}
//		}
//	}
//	if (minSize == INT_MAX)
//	{
//		return "";
//	}
//	string res(S, minStart, minSize);
//	return res;
//}
//
//int main()
//{
//	string s1,s2;
//	cin>>s1>>s2;
//
//	string s = minWindow(s1, s2);
//
//	cout<<s;
//	return 0;
//}