//#include <hash_set>
//#include <iostream>
//
//using namespace std;
//using namespace stdext;
//int consecusive(hash_set<int> &fs, int num, int flag)
//{
//	int i = 0;
//	while(fs.find(num + flag) != fs.end())
//	{
//		i++;
//		fs.erase(num + flag);
//		num += flag;
//	}
//	return i;
//}
//int longestConsecutive(vector<int> &num) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = num.size();
//	if(len < 2)
//		return len;
//	hash_set<int> fs;
//	for (int i = 0; i < len; i++)
//	{
//		fs.insert(num[i]);
//	}
//	int mlex = 1;
//	int left, right;
//	for (int i = 0; i < len; i++)
//	{
//		if (fs.find(num[i]) != fs.end())
//		{
//			fs.erase(num[i]);
//			left = consecusive(fs, num[i], 1);
//			right = consecusive(fs, num[i], -1);
//			if (left + right + 1 > mlex)
//			{
//				mlex = left + right + 1;
//			}
//		}
//	}
//	return mlex;
//}
//
//
//int main()
//{
//	vector<int> num;
//	num.push_back(1);
//	num.push_back(0);
//	num.push_back(-1);
//	//num.push_back(1);
//	//num.push_back(2);
//	//num.push_back(3);
//
//	int t= longestConsecutive(num);
//
//	cout<<t;
//
//	return 0;
//}


//int consecusive(unordered_set<int> &fs, int num, int flag)
//{
//	int i = 0;
//	while(fs.find(num + flag) != fs.end())
//	{
//		i++;
//		fs.erase(num + flag);
//		num += flag;
//	}
//	return i;
//}
//int longestConsecutive(vector<int> &num) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = num.size();
//	if(len < 2)
//		return len;
//	unordered_set<int> fs;
//	for (int i = 0; i < len; i++)
//	{
//		fs.insert(num[i]);
//	}
//
//	int mlex = 1;
//	int left, right;
//	for (int i = 0; i < len; i++)
//	{
//		if (fs.find(num[i]) != fs.end())
//		{
//			fs.erase(num[i]);
//			left = consecusive(fs, num[i], 1);
//			right = consecusive(fs, num[i], -1);
//			if (left + right + 1 > mlex)
//			{
//				mlex = left + right + 1;
//			}
//		}
//	}
//	return mlex;
//}