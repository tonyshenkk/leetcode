//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> searchRange(int A[], int n, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int low = -1, high = n;
//	int mid = -1;
//	vector<int> v;
//
//	while(low + 1 < high)
//	{
//		mid = (low + high) / 2;
//		if (A[mid] < target)
//		{
//			low = mid;
//		}
//		else
//			high = mid;
//	}
//	if (high > n -1 || A[high] != target)
//	{
//		mid = -1;
//	}
//	else
//		mid = high;
//	v.push_back(mid);
//
//	low = -1;
//	high = n;
//	mid = -1;
//
//	while(low + 1 < high)
//	{
//		mid = (low + high) / 2.0 + 0.5;
//		if (A[mid] > target)
//		{
//			high = mid;
//		}
//		else
//			low = mid;
//	}
//	if (low < 0 || A[low] != target)
//	{
//		mid = -1;
//	}
//	else
//		mid = low;
//	v.push_back(mid);
//
//	return v;
//}
//
//int main()
//{
//	vector<int> v;
//
//	int a[] = {1};
//	int tar = 2;
//
//	v = searchRange(a, sizeof(a) / sizeof(int), tar);
//
//	cout<<v[0]<<" "<<v[1]<<endl;
//
//	return 0;
//}