//#include <iostream>
//#include <string>
//
//using namespace std;
//
//bool isNumber(const char *s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	bool first = false, end = false, point = false, appear = false;
//	const char *p = s;
//
//	while(*p == ' ')
//		p++;
//	if (*p =='+' || *p == '-')
//	{
//		p++;
//	}
//	while((*p >= '0' && *p <= '9') || *p == '.')
//	{
//		if (*p == '.')
//		{
//			if (point)
//				return false;
//			else
//				point = true;
//		}
//		else
//		{
//			if (point)
//			{
//				end = true;
//			}
//			else
//				first = true;
//		}
//		p++;
//		//if (*p == '.')
//		//{
//		//	if (first && !point)
//		//	{
//		//		point = true;
//		//	}
//		//	else
//		//		return false;
//		//}
//		//else
//		//{
//		//	if (point)
//		//	{
//		//		end = true;
//		//	}
//		//	else
//		//		first = true;
//		//}
//		//p++;
//	}
//	if (*p == 'e' || *p == 'E')
//	{
//		p++;
//		if (*p == '+' || *p == '-')
//		{
//			p++;
//		}
//		if (*p < '0' || *p > '9')
//		{
//			//return false;
//		}
//		while(*p >= '0' && *p <= '9')
//			p++;
//	}
//	while(*p)
//	{
//		if (*p != ' ')
//		{
//			return false;
//		}
//		p++;
//	}
//	//if (point)
//	//{
//	//	if (first && end)
//	//	{
//	//		return true;
//	//	}
//	//	else 
//	//		return false;
//	//}
//	return first || end;
//}
//
//int main()
//{
//	string s = "   22.   ";
//	bool num = isNumber(s.c_str());
//
//	cout<<num;
//
//	return 0;
//}