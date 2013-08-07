//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int atoi(const char *str) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int num = 0;
//	int flag = 1;
//	int i = 0;
//	bool re = false;
//
//	while(str[i] == ' ')
//	{
//		i++;
//	}
//	if (str[i] == '+')
//	{
//		flag = 1;
//		i++;
//	}
//	else if (str[i] == '-')
//	{
//		flag = -1;
//		i++;
//	}
//	else
//	{}
//	while(str[i] >= '0' && str[i] <= '9')
//	{
//		num = num * 10;
//		if (INT_MAX - num < str[i] - '0' + 1)
//		{
//			if (flag > 0)
//			{
//				return INT_MAX;
//			}
//			else
//			{
//				if (INT_MAX - num < str[i] - '0')
//				{
//					return INT_MIN;
//				}
//			}
//		}
//		num += str[i] - '0';
//		if (num != 0 && INT_MAX / num < 10 && str[i+1] >= '0' && str[i+1] <= '9')
//		{
//			if (flag > 0)
//			{
//				return INT_MAX;
//			}
//			else
//				return INT_MIN;
//		}
//		i++;
//		re = true;
//	}
//	if (re)
//	{
//		return num * flag;
//	}
//	else
//		return 0;
//}
//int main()
//{
//	char s[] = "-1010023630o4";
//	int x;
//	x = atoi(s);
//
//	cout<< x<<endl;
//
//	return 0;
//}