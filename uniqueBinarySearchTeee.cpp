//#include <iostream>
//
//using namespace std;
//
//int numTrees(int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (n == 1)
//		return 1;
//	if (n < 0)
//		return 0;
//	int *A = new int[n + 1];
//	A[0] = 1;
//	A[1] = 1;
//	for (int i = 2; i <= n; i++)
//	{
//		A[i] = 0;
//		for (int j = 0; j < i; j++)
//		{
//			A[i] += A[j] * A[i - j - 1];
//		}
//	}
//	int t = A[n];
//	delete[] A;
//	return t;
//}
//int main()
//{
//	int n, t;
//	cin>>n;
//	t = numTrees(n);
//	cout<<t;
//
//	return 0;
//}