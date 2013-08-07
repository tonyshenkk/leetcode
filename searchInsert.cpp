//#include <iostream>
//
//using namespace std;
//int searchInsert(int A[], int n, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int l = -1, u = n;
//	int mid;
//	
//	while(l + 1 < u)
//	{
//		mid = (l + u) / 2;
//		if (A[mid] < target)
//		{
//			l = mid;
//		}
//		else
//			u = mid;
//	}
//	if (A[u] == target)
//	{
//		return u;
//	}
//	else
//		return l + 1;
//}
//
//int main()
//{
//	int a[] = {1};
//	int tar = 0;
//
//	int ind = searchInsert(a, sizeof(a) / sizeof(int), tar);
//
//	return 0;
//}