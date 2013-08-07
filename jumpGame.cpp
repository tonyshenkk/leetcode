//#include <iostream>
//
//using namespace std;
//
//bool canJump(int A[], int n)
//{
//	int max = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (A[i] + i > max && max >= i)
//		{
//			max = A[i] + i;
//		}
//		if (max >= n - 1)
//		{
//			return true;
//		}
//	}
//	return false;
//}
//
//int main()
//{
//	int A[] = {0};
//
//	bool can = canJump(A, sizeof(A)/sizeof(int));
//
//	cout<<can;
//
//	return 0;
//}
