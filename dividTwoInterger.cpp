//#include <iostream>
//
//using namespace std;
//
//int divide(int dividend, int divisor) {  
//	// Start typing your C/C++ solution below  
//	// DO NOT write int main() function  
//	int ret = 0;  
//
//	if(dividend == 0 || divisor == 0) return 0;  
//
//	int sign = 1;   // 1 : positive; -1 : negative  
//	if(dividend < 0) sign *= -1;  
//	if(divisor < 0) sign *= -1;  
//
//	long long tmpDiv = dividend;  
//	long long divL = abs(tmpDiv);  
//	long long tmpDivisor = divisor;  
//	long long divisorL = abs(tmpDivisor);  
//
//	while(divL >= divisorL){  
//		int count = 1;              // first: divL > divisorL   
//		long long sum = divisorL;   // long long, cal divisorL  
//		while(sum + sum <= divL){  
//			count += count;  
//			sum += sum;  
//		}  
//		divL -= sum;  
//		ret += count;  
//	}  
//
//	return sign * ret;  
//} 