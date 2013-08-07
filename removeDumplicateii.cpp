//#include <iostream>
//
//using namespace std;
//
//int removeDuplicates(int A[], int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (n <= 0)
//	{
//		return 0;
//	}
//	int len = 1;
//	bool dup = false;
//
//	for (int i = 1; i < n; i++)
//	{
//		if (A[i] == A[i -1])
//		{
//			if (!dup)
//			{
//				dup = true;
//				A[len] = A[i];
//				len++;
//			}
//		}
//		else
//		{
//			dup = false;
//			A[len] = A[i];
//			len++;
//		}
//	}
//	return len;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//	int *A = new int[n];
//
//	for (int i = 0;i < n; i++)
//	{
//		cin>>A[i];
//	}
//
//	n = removeDuplicates(A, n);
//
//	cout<<n;
//
//	return 0;
//}