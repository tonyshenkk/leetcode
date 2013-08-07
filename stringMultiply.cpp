//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string multiply(string num1, string num2) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int l1 = num1.length();
//	int l2 = num2.length();
//	int i1,i2;
//	int *tmp = new int[l1 + l2];
//
//	memset(tmp, 0, sizeof(int) * (l1 + l2));
//
//	for (int i = l1-1; i >= 0;i--)
//	{
//		i1 = num1.at(i) - '0';
//		for (int j = l2 -1; j >= 0; j--)
//		{
//			i2 = num2.at(j) - '0';
//			if (i1 >= 0 && i2 >= 0 && i1 <= 9 && i2 <= 9)
//			{
//				tmp[l1 + l2 - (i + j) - 2] += i1 * i2;
//			}
//			else
//			{
//				delete[] tmp;
//				return "";
//			}
//		}
//	}
//
//	int increment = 0;
//	int r;
//	for (int i = 0; i < l1 + l2; i++)
//	{
//		r = tmp[i];
//		r += increment;
//		increment = 0;
//		while(r >= 10)
//		{
//			r -= 10;
//			increment++;
//		}
//		tmp[i] = r;
//	}
//	string res = "";
//	char c;
//	for (int i = l1 + l2 - 1; i>= 0; i--)
//	{
//		if (res == "" && tmp[i] == 0)
//		{
//			continue;
//		}
//		c = tmp[i] + '0';
//		res += c;
//	}
//
//	delete[] tmp;
//	if (res == "")
//	{
//		return "0";
//	}
//	return res;
//
//}
//
//int main()
//{
//	string num1, num2;
//	string res;
//
//	cin>>num1>>num2;
//
//	res = multiply(num1, num2);
//
//	cout<<res;
//
//	return 0;
//}