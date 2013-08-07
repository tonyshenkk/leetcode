//#include <string>
//#include <iostream>
//
//using namespace std;
//
//int numDistinct(string S, string T) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int lenS = S.size(), lenT = T.size();
//	if (lenS < 1 || lenT < 1 || lenS <lenT)
//	{
//		return 0;
//	}
//	//int A[][] = new int[lenS][lenT];
//	int **A = new int*[lenS];
//	for (int i = 0; i < lenS; i++)
//	{
//		A[i] = new int[lenT];
//	}
//
//	for (int i = 0; i < lenS; i++)
//	{
//		for (int j = 0; j <= min(i, lenT - 1); j++)
//		{
//			A[i][j] = 0;
//			if (S.at(i) == T.at(j))
//			{
//				if (i == 0 || j == 0)
//				{
//					A[i][j] = 1;
//				}
//				else
//					A[i][j] = A[i - 1][j - 1];
//			}
//			A[i][j] += i - 1 < j ? 0 : A[i - 1][j]; 
//		}
//	}
//	int t = A[lenS - 1][lenT - 1];
//	for (int i = 0; i < lenS; i++)
//	{
//		delete[] A[i];
//	}
//	return t;
//}
//
//int main()
//{
//	string s, t;
//	cin>>s>>t;
//
//	int a = numDistinct(s, t);
//
//	cout<<a;
//	return 0;
//}