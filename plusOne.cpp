//#include <iostream>
//#include <vector>
//
//using namespace std;
//vector<int> plusOne(vector<int> &digits) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int flag = 0, t;
//	size_t len = digits.size() - 1;
//
//	if (len < 0)
//	{
//		return digits;
//	}
//
//	digits[len]++;
//
//	for (int i = len; i >= 0; i--)
//	{
//		t = digits[i] + flag;
//		if (t > 9)
//		{
//			t = t - 10;
//			digits[i] = t;
//			flag = 1;
//		}
//		else
//		{
//			digits[i] = t;
//			flag = 0;
//			break;
//		}
//	}
//	if (flag)
//	{
//		digits.insert(digits.begin(), 1, 1);
//	}
//	return digits;
//}
//
//int main()
//{
//	vector<int> digits;
//
//	int x;
//	while(cin>>x)
//	{
//		digits.push_back(x);
//	}
//
//	digits = plusOne(digits);
//
//	for (size_t i = 0; i < digits.size(); i++)
//	{
//		cout<<digits[i]<<" ";
//	}
//
//	return 0;
//}