//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//void backTrace(vector<vector<int>> &res, vector<int> &candinates, int target, long int left, bool *sel, int sum, int i)
//{
//	if (i >= candinates.size())
//	{
//		if (sum == target)
//		{
//			vector<int> temp;
//			for (int j=0; j < candinates.size(); j++)
//			{
//				if (sel[j])
//				{
//					temp.push_back(candinates[j]);
//				}
//			}
//			sort(temp.begin(), temp.end());
//			if (find(res.begin(), res.end(), temp) == res.end())
//			{
//				res.push_back(temp);
//			}
//		}
//		return;
//	}
//	left -= candinates[i];
//	if (sum + candinates[i] <= target)
//	{
//		sel[i] = true;
//		sum += candinates[i];
//		backTrace(res, candinates, target, left, sel, sum, i + 1);
//		sum -= candinates[i];
//	}
//	if (sum + left >= target)
//	{
//		sel[i] = false;
//		backTrace(res, candinates, target, left, sel, sum, i + 1);
//	}
//
//	left += candinates[i];
//}
//
//vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	bool *sel = new bool[candidates.size()];
//
//	long int left = 0;
//
//	for (int i = 0; i < candidates.size(); i++)
//	{
//		sel[i] = false;
//		left += candidates[i];
//	}
//
//	vector<vector<int>> res;
//
//	backTrace(res, candidates, target, left, sel, 0,0);
//
//
//	return res;
//
//}
//
//int main()
//{
//	vector<int> can;
//	int x;
//	int tar;
//	cin>> tar;
//
//	while (cin>>x)
//	{
//		can.push_back(x);
//	}
//
//	vector<vector<int>> res = combinationSum(can, tar);
//
//	for (int i = 0; i < res.size(); i++)
//	{
//		for (int j = 0; j < res[i].size(); j++)
//		{
//			cout<<res[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//
//	return 0;
//}