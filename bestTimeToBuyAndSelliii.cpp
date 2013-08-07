//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//int maxProfit(vector<int> &prices) {
//	 //Start typing your C/C++ solution below
//	 //DO NOT write int main() function
//
//	int len = prices.size();
//	if (len < 2)
//	{
//		return 0;
//	}
//	int *A = new int[len];
//	int maxp =-1, minp = prices[0];
//	for (int i = 0; i < len; i++)
//	{
//		if (prices[i] - minp > maxp)
//		{
//			A[i] = prices[i] - minp;
//			maxp = A[i];
//		}
//		else
//		{
//			minp = min(minp, prices[i]);
//			A[i] = A[i - 1];
//		}
//	}
//
//	int t = 0;
//	minp = prices[len - 1], maxp = -1;
//	for (int i = len - 1; i >= 0; i--)
//	{
//		if (minp - prices[i] > maxp)
//		{
//			maxp = minp - prices[i];
//		}
//		else
//		{
//			minp = max(minp, prices[i]);
//		}
//		if (maxp + A[i] > t)
//		{
//			t = maxp + A[i];
//		}
//	}
//
//	delete[] A;
//
//	return t;
//}
//
//int main()
//{
//	vector<int> price;
//	price.push_back(2);
//	price.push_back(1);
//	price.push_back(4);
//	price.push_back(5);
//	price.push_back(2);
//	price.push_back(9);
//	price.push_back(7);
//
//	int t = maxProfit(price);
//
//	cout<<t;
//
//	return 0;
//}