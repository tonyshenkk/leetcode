//#include <iostream>
//
//using namespace std;
//bool isPalindrome(int x) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int flag = 1;
//	int t = 0;
//	int ori = x;
//
//	if (x < 0)
//	{
//		return false;
//		flag = -1;
//		x = x * -1;
//	}
//
//	while(x)
//	{
//		t = t * 10 + x % 10;
//		x = x / 10;
//	}
//
//	t = t * flag;
//
//	return t == ori;
//}
//
//int main()
//{
//	int x;
//	bool t;
//	cin>>x;
//	t= isPalindrome(x);
//
//	cout<<t<<endl;
//
//	return 0;
//}