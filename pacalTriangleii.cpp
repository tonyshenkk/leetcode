//#include <vector>
//#include <iostream>
//
//using namespace std;
//
//vector<int> getRow(int rowIndex) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	vector<int> res;
//	if (rowIndex < 0)
//	{
//		return res;
//	}
//	vector<int> temp;
//	temp.push_back(1);
//
//	for (int i = 1; i <= rowIndex; i++)
//	{
//		res.push_back(1);
//		for (int j = 1; j < temp.size(); j++)
//		{
//			res.push_back(temp[j - 1] + temp[j]);
//		}
//		res.push_back(1);
//		temp = res;
//		res.clear();
//	}
//	return temp;
//}
//
//int main()
//{
//	int rowIndex;
//	cin>>rowIndex;
//
//	vector<int> res = getRow(rowIndex);
//
//	return 0;
//}