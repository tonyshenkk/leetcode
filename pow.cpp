//#include <iostream>
//
//using namespace std;
//int minEx(int &n)
//{
//	int i = 0;
//	long long a = 1;
//	while(a <= n)
//	{
//		a = a << 1;
//		i++;
//	}
//	if (i > 0)
//	{
//		i--;
//		n = n - (1<<i);
//	}
//	return i;
//}
//double pow(double x, int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int fx = 1, fn = 1;
//	if (x < 0)
//	{
//		if (n & 1)
//		{
//			fx = -1;
//		}
//		x = -1 * x;
//	}
//	if (n < 0)
//	{
//		fn = -1;
//		n = -1 * n;
//	}
//	double y1 = 1, y2 = 1;
//	while(n > 0)
//	{
//		int ex = minEx(n);
//		y2 = x;
//		while(ex > 0)
//		{
//			y2 *= y2;
//			ex--;
//		}
//		y1 *= y2;
//	}
//	if (fx < 0)
//	{
//		y1 *= -1;
//	}
//	if (fn < 0)
//	{
//		y1 = 1 / y1;
//	}
//	return y1;
//}
//
//int main()
//{
//	double y, x;
//	int n;
//	cin>>x;
//	cin>>n;
//	y = pow(x, n);
//
//	cout<<y;
//
//	return 0;
//}