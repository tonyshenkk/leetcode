//#include <iostream>
//
//using namespace std;
//
//bool search(int A[], int n, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int low = 0, high = n -1, mid;
//	while (low <= high)
//	{
//		mid = (low + high) / 2;
//		if (A[mid] == target)
//		{
//			return true;
//		}
//		else if (A[mid] < A[low])
//		{
//			if (A[mid] < target && A[high] >= target)
//			{
//				low = mid + 1;
//			}
//			else
//				high = mid - 1;
//		}
//		else if (A[mid] > A[low])
//		{
//			if (A[mid] > target && A[low] <= target)
//			{
//				high = mid - 1;
//			}
//			else
//				low = mid + 1;
//		}
//		else
//		{
//			while(A[low] == A[mid])
//				low++;
//		}
//	}
//	return false;
//}
//int main()
//{
//	int n, target;
//	cin>>n;
//
//	int *A = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin>>A[i];
//	}
//
//	cin>>target;
//
//	bool re = search(A, n, target);
//
//	cout<<re;
//
//	return 0;
//}