//#include <iostream>
//#include <vector>
//#include <algorithm>
//
//using namespace std;
//
//struct Interval {
//	int start;
//	int end;
//	Interval() : start(0), end(0) {}
//	Interval(int s, int e) : start(s), end(e) {}
//};
//
//bool cmp(const Interval &a, const Interval &b)
//{
//	return a.start < b.start;
//}
//
//vector<Interval> merge(vector<Interval> &intervals) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//
//	sort(intervals.begin(), intervals.end(), cmp);
//	if (intervals.size() < 2)
//	{
//		return intervals;
//	}
//
//	for (vector<Interval>::iterator ite = intervals.begin() + 1, ite1 = intervals.begin(); ite != intervals.end();)
//	{
//		if (ite->start <= ite1->end)
//		{
//			if (ite1->end < ite->end)
//			{
//				ite1->end = ite->end;
//			}
//			intervals.erase(ite);
//			ite = ite1 +1;
//		}
//		else
//		{
//			ite++;
//			ite1++;
//		}
//	}
//
//	return intervals;
//
//}
//
//int main()
//{
//	vector<Interval> res, inter;
//	int n,s,e;
//
//	cin>>n;
//
//	for (int i = 0; i < n; i++)
//	{
//		cin>>s>>e;
//		Interval a(s, e);
//		inter.push_back(a);
//	}
//
//	res = merge(inter);
//
//	return 0;
//}