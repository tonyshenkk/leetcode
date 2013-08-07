//#include <iostream>
//
//
//char *strStr(char *haystack, char *needle) {  
//	// Start typing your C/C++ solution below  
//	// DO NOT write int main() function  
//	int nLen = strlen(needle);  
//	int* fail = new int[nLen];  
//	memset(fail, -1, nLen*sizeof(int));  
//	int i, j, k;  
//	for (i = 1; i < nLen; ++i)  
//	{  
//		for (k = fail[i-1]; k >= 0 && needle[i] != needle[k+1]; k = fail[k]);  
//		if (needle[k+1] == needle[i])  
//			fail[i] = k + 1;  
//	}  
//	i = j = 0;  
//	while(haystack[i] && needle[j])  
//	{  
//		if (haystack[i] == needle[j])  
//		{  
//			++i;  
//			++j;  
//		}  
//		else if(j == 0) ++i;  
//		else j = fail[j-1] + 1;  
//	}  
//	delete fail;  
//	if (needle[j]) return NULL;  
//	else return haystack + i - j;  
//}  