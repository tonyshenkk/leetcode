//#include <iostream>
//
//using namespace std;
//
//int uniquePaths(int m, int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int *A = new int[m * n];
//
//	for (int i = 0; i < n; i++)
//	{
//		A[i] = 1;
//	}
//	for (int i = 0; i< m; i++)
//	{
//		A[i * n] = 1;
//	}
//
//	for (int i = 1; i < n; i++)
//	{
//		for (int j = 1; j < m; j++)
//		{
//			A[j * n + i] = A[j * n + i - 1] + A[(j - 1) * n + i]; 
//		}
//	}
//	int num = A[m * n -1];
//	delete[] A;
//	return num;
//}
//
//int main()
//{
//	int num, m, n;
//	cin>>m>>n;
//
//	num = uniquePaths(m, n);
//
//	cout<<num;
//
//	return 0;
//}