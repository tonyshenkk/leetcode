//#include <iostream>
//#include <vector>
//#include <stack>
//
//using namespace std;
//
//int largestRectangleArea(vector<int> &height) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = height.size();
//	if (len < 1)
//	{
//		return 0;
//	}
//	int maxArea = 0, area, top;
//	stack<int> s;
//	s.push(0);
//
//	int i;
//	for (i = 1; i < len; i++)
//	{
//		if (s.empty() || height[i] > height[s.top()])
//			s.push(i);
//		else
//		{
//			//s.pop();
//			//while(!s.empty())
//			{
//				top = s.top();
//				s.pop();
//				if (s.empty())
//					area = height[top] * i;
//				else
//					area = height[top] * (i - s.top() - 1);
//				if (area > maxArea)
//				{
//					maxArea = area;
//				}
//			}
//			i--;
//		}
//	}
//	while(!s.empty())
//	{
//		top = s.top();
//		s.pop();
//		if (s.empty())
//			area = height[top] * i;
//		else
//			area = height[top] * (i - s.top() - 1);
//		if (area > maxArea)
//		{
//			maxArea = area;
//		}
//	}
//
//	return maxArea;
//
//}
//
//int main()
//{
//	int n, area;
//
//	cin>>n;
//	vector<int> height(n, 0);
//	for (int i = 0; i < n; i++)
//	{
//		cin>>height[i];
//	}
//
//	area = largestRectangleArea(height);
//
//	cout<<area;
//
//	return 0;
//}