//#include <iostream>
//#include <string>
//#include <vector>
//#include <algorithm>
//
//#include <crtdbg.h>
//
//using namespace std;
//
//bool can_place(int A[], int n, int row, int k)
//{
//	if(A[row] != -5000)
//		return false;
//
//	for (int i = 0; i<n; i++)
//	{
//		if (A[i] == k || abs(i - row) == abs(A[i] - k))
//		{
//			return false;
//		}
//	}
//	return true;
//}
//
//void queen(vector<vector<string>> &res,int A[], int n, int row)
//{
//	if (n == row)
//	{
//		vector<string> temp;
//		for (int i = 0; i < n; i++)
//		{
//			string str(n, '.');
//			str.at(A[i]) = 'Q';
//			temp.push_back(str);
//		}
//		res.push_back(temp);
//	}
//	else
//	{
//		for (int k = 0; k < n; k++)
//		{
//	/*		if(row == 0)
//			{
//				for (int i = 0; i < n; i++)
//				{
//					A[i] = -5000;
//				}
//			}*/
//			if (can_place(A, n, row, k))
//			{
//				A[row] = k;
//				queen(res, A, n, row + 1);
//				A[row] = -5000;
//			}
//		}
//	}
//}
//
//vector<vector<string>> squeen(int n)
//{
//	vector<vector<string>> res;
//	if (n > 0)
//	{
//		int *A = new int[n];
//		for (int i = 0; i < n; i++)
//		{
//			A[i] = -5000;
//		}
//		queen(res, A, n, 0);
//		delete[] A;
//	}
//	return res;
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//
//	vector<vector<string>> res = squeen(n);
//
//	for (size_t i = 0; i < res.size(); i++)
//	{
//		for (vector<string>::iterator ite = res[i].begin(); ite != res[i].end(); ite++)
//		{
//			cout<<*ite;
//			cout<<endl;
//		}
//		cout<<endl<<endl;
//	}
//
//	return 0;
//
//}