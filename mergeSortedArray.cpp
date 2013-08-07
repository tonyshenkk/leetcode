//#include <iostream>
//
//using namespace std;
//
//void merge(int A[], int m, int B[], int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int i = m - 1, j = n - 1, k = m + n - 1;
//	for (; i > -1 && j > -1; k--)
//	{
//		if (A[i] > B[j])
//		{
//			A[k] = A[i];
//			i--;
//		}
//		else
//		{
//			A[k] = B[j];
//			j--;
//		}
//	}
//	while (i > -1)
//	{
//		A[k] = A[i];
//		k--;
//		i--;
//	}
//	while (j > -1)
//	{
//		A[k] = B[j];
//		k--;
//		j--;
//	}
//}