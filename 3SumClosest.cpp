//#include <vector>
//
//using namespace std;
//
//int threeSumClosest(vector<int> &num, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = num.size();
//	if (len < 3)
//	{
//		return target;
//	}
//
//	int minSum = INT_MAX;
//
//	sort(num.begin(), num.end());
//	int a, b, c;
//	int low, high, t;
//
//	for (int i = 0; i < len - 2; i++)
//	{
//		a = num[i];
//		low = i +1;
//		high = len -1;
//		while(low < high)
//		{
//			b = num[low];
//			c = num[high];
//			if (abs(target - a -b - c) < minSum)
//			{
//				t = a + b + c;
//				minSum = abs(target - a -b - c);
//				if (minSum == 0)
//				{
//					return target;
//				}
//			}
//			if (a + b + c > target)
//			{
//				high--;
//			}
//			else
//				low++;
//		}
//	}
//	return t;
//}