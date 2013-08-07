//#include <iostream>
//#include <math.h>
//
//using namespace std;
//
//int divide(int dividend, int divisor) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int sign = 1;
//	int res = 0;
//
//	if (dividend == 0 || divisor == 0)
//	{
//		return res;
//	}
//
//	if ((divisor < 0 && dividend > 0) || (divisor > 0 && dividend < 0))
//	{
//		sign = -1;
//	}
//	long int divi = dividend;
//	long int divr = divisor;
//
//	divi = abs(divi);
//	divr = abs(divr);
//
//	while(divi > divr)
//	{
//		res++;
//		divi -= divr;
//	}
//
//	if (sign > 0)
//	{
//		return res;
//	}
//	else
//		return -res;
//	;
//}
//
//int main()
//{
//	int a,b,c;
//	cin>>b>>c;
//	a = divide(b,c);
//
//	cout<<a<<endl;
//
//	return 0;
//}