//#include <iostream>
//
//using namespace std;
//
//int low, high, a,b;
//int maxSubArray(int A[], int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int maxVal = A[0];
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//	{
//		sum += A[i];
//		if (sum > maxVal)
//		{
//			high = i;
//			a = low;
//			maxVal = sum;
//		}
//		if (sum < 0)
//		{
//			sum = 0;
//			low = i +1;
//		}
//	}
//	return maxVal;
//}
//
//int main()
//{
//	int A[] = {8,-2,-4,-1,-8,3,8,8,3,4,2,-9,-1,-3,-6,8,-3,9};
//
//	int val = maxSubArray(A, sizeof(A)/sizeof(int));
//
//	cout<<val<<"  "<<a<<"  "<<high;
//
//	return 0;
//}