//#include <iostream>
//
//using namespace std;
//
//int jump(int A[], int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int *b = new int[n];
//	memset(b, 0, sizeof(int) * n);
//
//	int minVal;
//	for (int i = 1; i < n; i++)
//	{
//		minVal = b[i - 1] + 2;
//		for (int j = i - 1; j >= 0; j--)
//		{
//			if (A[j] >= (i - j) && b[j] + 1 < minVal)
//			{
//				minVal = b[j] + 1;
//			}
//		}
//		b[i] = minVal;
//	}
//	minVal = b[n - 1];
//	delete[] b;
//	return minVal;
//}
//
//int main()
//{
//	int a[6];
//	for (int i = 0; i < 5; i++)
//	{
//		cin>>a[i];
//	}
//
//	int x = jump(a, 5);
//
//	cout<<x;
//
//	return 0;
//}