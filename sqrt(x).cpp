//#include <iostream>
//
//using namespace std;
//
//int sqrt(int x)
//{
//	if (x < 0)
//	{
//		return 0;
//	}
//	if (x == 1)
//	{
//		return x;
//	}
//	int low = 0, high = x >> 1, mid = (low + high) >> 1;
//	long long t;
//	while(low <= high)
//	{
//		mid = (low + high) / 2;
//		t = mid;
//		t *= t;
//		if (t < x)
//		{
//			low = mid + 1;
//		}
//		else if (t > x)
//		{
//			high = mid -1;
//		}
//		else
//			return mid;
//	}
//	return high;
//}
//
//int main()
//{
//	int a, b;
//	cin>>a;
//	b = sqrt(a);
//
//	cout<<b;
//	return 0;
//}