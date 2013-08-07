//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void threeSum(vector<int> &num, int begin, int target, vector<vector<int>> &res)
//{
//	int len = num.size();
//	int low, high;
//	vector<int> t;
//	for (int i = begin + 1; i < len - 2; i++)
//	{
//		low = i + 1;
//		high = len - 1;
//		while(low < high)
//		{
//			if (num[begin] + num[i] + num[low] + num[high] == target)
//			{
//				t.clear();
//				t.push_back(num[begin]);
//				t.push_back(num[i]);
//				t.push_back(num[low]);
//				t.push_back(num[high]);
//				if(find(res.begin(), res.end(), t) == res.end())
//					res.push_back(t);
//			}
//			if (num[begin] + num[i] + num[low] + num[high] > target)
//			{
//				high--;
//			}
//			else
//				low++;
//		}
//		
//	}
//}
//
//vector<vector<int> > fourSum(vector<int> &num, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<vector<int>> res;
//	int len = num.size();
//
//	if (len < 4)
//	{
//		return res;
//	}
//	sort(num.begin(), num.end());
//	for (int i = 0; i < len - 3; i++)
//	{
//		threeSum(num, i, target, res);
//	}
//	return res;
//}
//
//int main()
//{
//
//}