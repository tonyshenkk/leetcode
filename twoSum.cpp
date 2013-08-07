/************************************************************************/
/* solved two sum                                                                     */
/************************************************************************/
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//vector<int> twoSum(vector<int> &numbers, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<int> index;
//
//	for (vector<int>::iterator t1 = numbers.begin(); t1 != numbers.end(); t1++)
//	{
//		for (vector<int>::iterator t2 = t1 + 1; t2 != numbers.end(); t2++)
//		{
//			if (*t1 + *t2 == target)
//			{
//				index.push_back(t1 - numbers.begin() + 1);
//				index.push_back(t2 - numbers.begin() + 1);
//				return index;
//			}
//		}
//	}
//	return index;
//
//}
//
//int main()
//{
//	vector<int> number;
//	vector<int> index;
//	int target;
//	int temp;
//
//	while (cin>>temp)
//	{
//		if (temp == 0)
//		{
//			break;
//		}
//		number.push_back(temp);
//	}
//
//	cin>>target;
//
//	index = twoSum(number, target);
//
//	cout<<index.at(0)<<" "<<index.at(1);
//
//	return 0;
//
//}
