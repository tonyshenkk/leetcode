//#include <string>
//#include <iostream>
//
//using namespace std;
//
//int minDistance(string word1, string word2) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len1 = word1.length(), len2 = word2.length();
//	if (len1 < 1)
//		return len2;
//	if (len2 < 1)
//		return len1;
//
//	int *A = new int[(len1+1) * (len2+1)];
//
//	for (int i = 0; i <= len1; i++)
//	{
//		A[i] = i;
//	}
//	for (int i = 0; i <= len2; i++)
//	{
//		A[i * (len1+1)] = i;
//	}
//
//	for (int i = 1; i <= len1; i++)
//	{
//		for (int j = 1; j <= len2; j++)
//		{
//			A[i + j * (len1+1)] = min(A[i - 1 + j * (len1+1)] + 1, A[i + (j - 1) * (len1+1)] + 1);
//			if (word1.at(i-1) == word2.at(j-1))
//			{
//				A[i + j * (len1+1)] = min(A[i - 1 + (j - 1)* (len1+1)], A[i + j * (len1+1)]);
//			}
//			else
//				A[i + j * (len1+1)] = min(A[i - 1 + (j - 1)* (len1+1)] + 1, A[i + j * (len1+1)]);
//		}
//	}
//	int t = A[(len1+1) * (len2+1)-1];
//	delete[] A;
//	return t;
//}
//
//int main()
//{
//	string s1, s2;
//	cin>>s1>>s2;
//
//	int t = minDistance(s1, s2);
//
//	cout<<t;
//
//	return 0;
//}