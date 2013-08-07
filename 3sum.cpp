//#include <iostream>
//#include <vector>
//#include <hash_set>
//
//using namespace std;
//
//vector<vector<int> > threeSum(vector<int> &num) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<vector<int>> res;
//	int len = num.size();
//	if (len < 3)
//	{
//		return res;
//	}
//	sort(num.begin(), num.end());
//
//	vector<int> t;
//	int low, high;
//	int a, b, c;
//	for (int i = 0; i < len - 2; i++)
//	{
//		a = num[i];
//		low = i + 1;
//		high = len - 1;
//		while(low < high)
//		{
//			b = num[low];
//			c = num[high];
//			if (a + b + c == 0)
//			{
//				t.clear();
//				t.push_back(a);
//				t.push_back(b);
//				t.push_back(c);
//				if (find(res.begin(), res.end(), t) == res.end())
//				{
//					res.push_back(t);
//				}
//			}
//			if (a + b + c > 0)
//			{
//				high--;
//			}
//			else
//				low++;
//		}
//	}
//	return res;
//}