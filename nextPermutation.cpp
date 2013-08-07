//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//void nextPermutation(vector<int> &num) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int i = num.size() -1;
//
//	while (i > 0)
//	{
//		if (num[i] <= num[i - 1])
//		{
//			--i;
//		}
//		else
//			break;
//	}
//	if (i == 0)
//	{
//		i = num.size() - 1;
//		int j = 0;
//		while(i > j)
//		{
//			swap(num[i], num[j]);
//			i--;
//			j++;
//		}
//	}
//	else
//	{
//		i--;
//		int j = num.size() - 1;
//		while(i < j && num[j] <= num[i])
//		{
//			j--;
//		}
//		swap(num[i], num[j]);
//
//		i++;
//		j = num.size() - 1;
//		while(i < j)
//		{
//			swap(num[i], num[j]);
//			i++;
//			j--;
//		}
//	}
//
//}
//int main()
//{
//	vector<int> num;
//	int i;
//
//	while(cin>>i)
//	{
//		num.push_back(i);
//	}
//	nextPermutation(num);
//
//	for (vector<int>::iterator ite = num.begin(); ite != num.end(); ite++)
//	{
//		cout<<*ite<<",";
//	}
//	return 0;
//}