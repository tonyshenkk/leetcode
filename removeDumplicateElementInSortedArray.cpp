//#include <iostream>
//
//int removeDuplicates(int A[], int n) {  
//	// Start typing your C/C++ solution below  
//	// DO NOT write int main() function  
//	if (n <= 1) return n;  
//
//	int i = 0, j = 1;  
//	while(j < n)  
//	{  
//		if (A[i] == A[j])  
//		{  
//			++j;  
//		}  
//		else  
//		{  
//			A[++i] = A[j++];  
//		}  
//	}  
//	return i+1;  
//}  