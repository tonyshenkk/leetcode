//#include <iostream>
//
//using namespace std;
//
//double findMedianSortedArrays(int A[], int m, int B[], int n) 
//{
//	int *tem = new int[m + n];
//	double num;
//
//
//	int i = 0, j = 0, t = 0;
//	for (; i < m && j < n;)
//	{
//		if (A[i] < B[j])
//		{
//			tem[t++] = A[i++];
//		}
//		else
//			tem[t++] = B[j++];
//	}
//	if (i < m)
//	{
//		for (; i < m;)
//		{
//			tem[t++] = A[i++];
//		}
//	}
//	else
//		for (; j < n;)
//		{
//			tem[t++] = B[j++];
//		}
//	if ((m + n) % 2 == 0)
//	{
//		num = (tem[(m + n) >> 1] + tem[((m + n) >> 1) - 1]) / 2.0;
//	}
//	else
//	{
//		num = tem[(m + n) >> 1];
//	}
//	delete[] tem;
//	return num;
//}
//
//int main()
//{
//	int a[7] = {1, 5, 10, 15, 20, 25, 30};
//	int b[5] = {2, 6, 11, 16, 17};
//
//	double median = findMedianSortedArrays(a, 7, b, 5);
//
//	cout<<median<<endl;
//
//	return 0;
//}