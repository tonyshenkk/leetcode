//#include <vector>
//
//int maxProfit(vector<int> &prices) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = prices.size();
//
//	if (len < 2)
//	{
//		return 0;
//	}
//	int t = 0;
//	for (int i = 0; i < len - 1; i++)
//	{
//		if (prices[i] < prices[i + 1])
//		{
//			t += prices[i + 1] - prices[i];
//		}
//	}
//	return t;
//}