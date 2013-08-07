//#include <iostream>
//#include <string>
//
//using namespace std;
//string convert(string s, int nRows) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function    
//	string *temp = new string[nRows];
//	string result;
//	for (int i = 0; i < nRows; i++)
//	{
//		temp[i] = "";
//	}
//
//	int len = (nRows << 1) - 2;
//	len = max(1, len);
//	for(int i = 0, j = 0; i < s.length(); i++)
//	{
//		j = i % len;
//		if ( j < nRows)
//		{
//			temp[j] += s.at(i);
//		}
//		else
//		{
//			temp[2 * nRows - j - 2] += s.at(i);
//		}
//	}
//	
//	for(int i = 0; i < nRows; i++)
//	{
//		result += temp[i];
//	}
//	delete[] temp;
//	return result;
//}
//
//
//int main()
//{
//	string s, re;
//	int row;
//	cin>>s;
//
//	cin>>row; 
//	re = convert(s, row);
//
//	cout<<re;
//
//	return 0;
//}