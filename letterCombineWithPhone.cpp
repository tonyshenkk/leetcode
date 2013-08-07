//#include <vector>
//
//void comb(vector<string> &result, string &str, string &digits, int pos, int size) {  
//	if (pos == size)  
//	{  
//		result.push_back(str);      // save results  
//		return;  
//	}  
//
//	int j = digits[pos]-'0';  
//	for (int i = 0; i < counts[j]; ++i)  
//	{  
//		str[pos] = letter[j] + i;  
//		comb(result, str, digits, pos+1, size);  
//	}  
//}  
//
//vector<string> letterCombinations(string digits) {  
//	// Start typing your C/C++ solution below  
//	// DO NOT write int main() function  
//	int nSize = digits.size();  
//	string str(nSize, ' ');  
//	vector<string> result;  
//
//	comb(result, str, digits, 0, nSize);  
//	return result;  
//}  