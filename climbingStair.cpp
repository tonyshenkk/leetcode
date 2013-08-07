//#include <iostream>
//
//using namespace std;
//
//int climbStairs(int n)
//{
//	if (n < 2)
//	{
//		return 1;
//	}
//	int *A = new int[n + 1];
//	A[0] = 1;
//	A[1] = 1;
//	for (int i = 2; i <= n;i++)
//	{
//		A[i] = A[i - 1] + A[i - 2];
//	}
//	int t = A[n];
//	delete[] A;
//	return t;
//}
//
//int main()
//{
//	int n, t;
//	cin>>n;
//	t = climbStairs(n);
//
//	cout<<t;
//
//	return 0;
//}