//#include <string>
//#include <iostream>
//
//using namespace std;
//int reverse(int x) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int flag = 1;
//
//	if (x < 0)
//	{
//		flag = -1;
//	}
//	x = x * flag;
//	char dig[32];
//	sprintf(dig, "%d", x);
//	string s = dig;
//	string r = "";
//
//	for (int i = s.length() - 1; i > -1; i--)
//	{
//		r += s.at(i);
//	}
//
//	return flag * atoi(r.c_str());
//}
//
//int main()
//{
//	int x, y;
//	cin>>x;
//
//	y = reverse(x);
//
//	cout<<y<<endl;
//
//	return 0;
//}