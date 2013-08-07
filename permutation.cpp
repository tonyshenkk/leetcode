//#include <vector>
//#include <iostream>
//#include <algorithm>
//
//using namespace std;
//
//void insert(vector<vector<int>> &list, int t)
//{
//	vector<vector<int>> res;
//	for (size_t i = 0; i < list.size(); i++)
//	{
//		vector<vector<int>> temp(list[i].size() + 1, list[i]);
//		for (size_t j = 0;j < temp.size(); j++)
//		{
//			vector<int>::iterator ite = temp[j].begin() + j;
//			//for (vector<int>::iterator ite = temp[j].begin(); ite != temp[j].end(); ite++)
//			//{
//			//	temp[j].insert(ite, t);
//			//}
//			temp[j].insert(ite, t);
//			if (find(res.begin(), res.end(), temp[j]) == res.end())
//			{
//				res.push_back(temp[j]);
//			}
//		}
//	}
//	list.clear();
//	list = res;
//}
//vector<vector<int>> permute(vector<int> &num)
//{
//	vector<vector<int>> list;
//	vector<int> temp(1, num[0]);
//
//	list.push_back(temp);
//
//	for (size_t i = 1; i < num.size(); i++)
//	{
//		insert(list, num[i]);
//	}
//
//	return list;
//}
//
//int main()
//{
//	vector<int> num;
//
//	int x;
//	while(cin>>x)
//	{
//		num.push_back(x);
//	}
//
//	vector<vector<int>> list = permute(num);
//
//	for (size_t i = 0; i < list.size(); i++)
//	{
//		for (size_t j = 0; j < list[i].size(); j++)
//		{
//			cout<<list[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}