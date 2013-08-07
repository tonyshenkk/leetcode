//#include <iostream>
//
//using namespace std;
//int firstMissingPositive(int A[], int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	bool *h = new bool[n+1];
//	int i;
//	for (i = 0; i < n; i++)
//	{
//		h[i] = false;
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		if (A[i] > 0 && A[i] < n)
//		{
//			h[A[i]] = true;
//		}
//	}
//
//	for (i = 1; i < n+1; i++)
//	{
//		if (!h[i])
//		{
//			break;
//		}
//	}
//	delete[] h;
//	return i;
//}
//int main()
//{
//	int n;
//	int *A;
//
//	cin>>n;
//	A = new int[n];
//
//	for (int i = 0; i < n;i++)
//	{
//		cin>>A[i];
//	}
//
//	int x = firstMissingPositive(A, n);
//
//	cout<<x<<endl;
//
//	return 0;
//}