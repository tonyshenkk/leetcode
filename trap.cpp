//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//int trap(int A[], int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (n < 3)
//	{
//		return 0;
//	}
//	int *back = new int[n];
//	int *forw = new int[n];
//
//	memset(back, 0, sizeof(int) * n);
//	memset(forw, 0, sizeof(int) * n);
//
//	int maxVal = A[0];
//	for (int i = 0; i <n; i++)
//	{
//		if (A[i] < maxVal)
//		{
//			forw[i] = maxVal - A[i];
//		}
//		if (A[i] >= maxVal)
//		{
//			forw[i] = 0;
//			maxVal = A[i];
//		}
//	}
//
//	maxVal = A[n - 1];
//	for (int i =n -1; i >=0; i--)
//	{
//		if (A[i] < maxVal)
//		{
//			back[i] = maxVal - A[i];
//		}
//		if (A[i] >= maxVal)
//		{
//			back[i] = 0;
//			maxVal = A[i];
//		}
//	}
//
//	int sum = 0;
//
//	for (int i = 0; i< n; i++)
//	{
//		sum += min(forw[i], back[i]);
//	}
//	return sum;
//}
//
//int main()
//{
//	//int n;
//	//cin>>n;
//
//	//int *A = new int[n];
//	int A[] = {6,4,2,0,3,2,0,3,1,4,5,3,2,7,5,3,0,1,2,1,3,4,6,8,1,3};
//	//for (int i = 0; i < n;i++)
//	//{
//	//	cin>>A[i];
//	//}
//
//	int sum = trap(A, sizeof(A)/ sizeof(int));
//
//	return 0;
//}