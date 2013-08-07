//#include <iostream>
//#include <vector>
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
//vector<Interval> insert(vector<Interval> &intervals, Interval newInterval) {
//	 Start typing your C/C++ solution below
//	 DO NOT write int main() function
//	bool flag = true;
//	if (intervals.size() < 1)
//	{
//		intervals.insert(intervals.begin(), 1, newInterval);
//		return intervals;
//	}
//
//	vector<Interval>::iterator ite = intervals.begin();
//	while(ite != intervals.end())
//	{
//		if (ite->start > newInterval.start)
//		{
//			intervals.insert(ite, 1, newInterval);
//			break;
//			flag = false;
//		}
//		ite++;
//	}
//	if (flag)
//	{
//		intervals.push_back(newInterval);
//	}
//	ite = intervals.begin();
//	vector<Interval>::iterator ite1 = ite + 1;
//
//	while(ite1 != intervals.end())
//	{
//		if (ite->end >= ite1->start)
//		{
//			if (ite->end < ite1->end)
//			{
//				ite->end = ite1->end;
//			}
//			intervals.erase(ite1);
//			ite1 = ite +1;
//		}
//		else
//		{
//			ite++;
//			ite1++;
//		}
//	}
//	return intervals;
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
//	Interval newint(6,7);
//
//	res = insert(inter, newint);
//
//	return 0;
//}