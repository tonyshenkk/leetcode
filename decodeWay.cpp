//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int numDecodings(string s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = s.length();
//	if (len < 1)
//		return 0;
//	int t;
//	int *A = new int[len + 1];
//	memset(A, 0, sizeof(int) * (len + 1));
//
//	if (10 > s[0] - '0'&& s[0] - '0' > 0)
//	{
//		A[0] = 1;
//	}
//	else
//	{
//		delete[] A;
//		return 0;
//	}
//	if (s[0] != '0')
//	{
//		A[1] = 1;
//	}
//	
//	for (int i = 1; i < len; i++)
//	{
//		t = (s[i - 1] - '0') * 10 + s[i] - '0';
//		if (s[i] != '0')
//		{
//			A[i +1] = A[i];
//		}
//		if (t > 9 && t < 27)
//		{
//			A[i + 1] += A[i-1];
//		}
//	}
//	len = A[len];
//	delete[] A;
//	return len;
//}
//
//int main()
//{
//	string s;
//	int n;
//
//
//	cin>>s;
//	n = numDecodings(s);
//
//	cout<<n;
//
//	return 0;
//}