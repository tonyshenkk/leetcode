#include <vector>
using namespace std;

//int maxArea(vector<int> &height) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = height.size();
//	if (len < 2)
//	{
//		return 0;
//	}
//	int maxA = 0, t;
//	for (int i = 0; i < len; i++)
//	{
//		for (int j = i + 1; j < len; j++)
//		{
//			t = min(height[i], height[j]) * (j - i);
//			if (t > maxA)
//			{
//				maxA = t;
//			}
//		}
//	}
//	return maxA;
//}


//int maxArea(vector<int> &height) {
//	int len = height.size();
//	if (len < 2)
//	{
//		return 0;
//	}
//	int maxA = 0, low = 0, high = len - 1, t;
//	while(low < high)
//	{
//		if (height[low] < height[high])
//		{
//			t = height[low] * (high - low);
//			low++;
//		}
//		else
//		{
//			t = height[high] * (high - low);
//			high--;
//		}
//		if (t > maxA)
//		{
//			maxA = t;
//		}
//	}
//	return maxA;
//}