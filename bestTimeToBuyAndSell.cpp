//#include <vector>
//
//int maxProfit(vector<int> &prices) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = prices.size();
//	if(len < 2)
//		return 0;
//	int maxp = prices[len - 1];
//	int t = 0;
//	for(int i = len - 1; i >= 0;i--)
//	{
//		maxp = max(maxp, prices[i]);
//		t = max(t, maxp - prices[i]);
//	}
//	return t;
//}