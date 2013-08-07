//#include <iostream>
//
//using namespace std;
//
//int search(int A[], int n, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int low = 0, high = n - 1;
//	int mid;
//
//	while(low <= high)
//	{
//		mid = (low + high) / 2;
//		if (A[mid] == target)
//		{
//			return mid;
//		}
//		if (A[low] < A[mid])
//		{
//			if (A[low] <= target && A[mid] > target)
//			{
//				high = mid - 1;
//			}
//			else
//				low = mid + 1;
//
//		}
//		else
//		{
//			if (A[mid+1] <= target && A[high] >= target)
//			{
//				low = mid + 1;
//			}
//			else
//			{
//				high = mid - 1;
//			}
//		}
//	}
//	return -1;
//}
//
//int main()
//{
//	int A[] = {4,5,6,7,0,1,2};
//	int tar = 6;
//
//	int ind = search(A, sizeof(A) / sizeof(int), tar);
//
//	cout<<ind<<endl;
//
//	return 0;
//}