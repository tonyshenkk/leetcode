//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<string> restoreIpAddresses(string s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<string> res;
//	int len = s.length();
//
//	if (len < 4 || len > 12)
//		return res;
//	int num;
//	string temp;
//	for (int i = 1; i < 4; i++)
//	{
//		temp = s.substr(0, i);
//		num = atoi(temp.c_str());
//		if ((num < 0 || num > 255) || (num == 0 && i != 1) || (num != 0 && s[0] == '0'))
//			continue;
//		for (int j = 1; j < 4 && i + j < len; j++)
//		{
//			temp = s.substr(i, j);
//			num = atoi(temp.c_str());
//			if ((num > 255 || num < 0) || (num == 0 && j != 1) || (num != 0 && s[i] == '0'))
//				continue;
//
//			for (int k = 1; k < 4&& i + j + k < len; k++)
//			{
//				temp = s.substr(i + j, k);
//				num = atoi(temp.c_str());
//				if ((num < 0 || num > 255) || (num == 0 && k != 1) || (num != 0 && s[i + j] == '0'))
//					continue;
//
//				temp = s.substr(i + j + k, len - (i + j + k));
//				num = atoi(temp.c_str());
//				if((num < 0 || num > 255) || (num == 0 && temp.length() > 1)||(num != 0 && temp[0] == '0'))
//					continue;
//				else
//				{
//					temp = s.substr(0, i) + "." + s.substr(i, j) + "." + s.substr(i + j, k) + "." + temp;
//					res.push_back(temp);
//				}
//			}
//		}
//	}
//	return res;
//}
//
//int main()
//{
//	vector<string> res;
//
//	string s;
//	cin>>s;
//
//	res = restoreIpAddresses(s);
//
//	for (int i = 0; i < res.size(); i++)
//	{
//		cout<<res[i]<<endl;
//	}
//
//	return 0;
//}