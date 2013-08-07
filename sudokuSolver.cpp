//#include <vector>
//#include <string>
//#include <iostream>
//
//using namespace std;
//
//bool isValid(vector<vector<char>> &board, int i, int j)
//{
//	bool row[10] = {false};
//	bool col[10] = {false};
//	bool rec[10] = {false};
//	char c;
//	for (int k = 0; k < 9; k++)
//	{
//		c = board[i][k] - '0';
//		if (c > 0 && c <= 9)
//		{
//			if (row[c])
//			{
//				return false;
//			}
//			else
//				row[c] = true;
//		}
//	}
//
//	for (int k = 0; k < 9; k++)
//	{
//		c = board[k][j] - '0';
//		if (c > 0 && c <= 9)
//		{
//			if (col[c])
//			{
//				return false;
//			}
//			else
//				col[c] = true;
//		}
//	}
//
//	i = i /3;
//	j = j /3;
//
//	for (int k = 0; k < 3; k++)
//	{
//		for (int l = 0; l < 3; l++)
//		{
//			c = board[i * 3 + k][j * 3 + l] - '0';
//			if (c > 0 && c <= 9)
//			{
//				if (rec[c])
//				{
//					return false;
//				}
//				else
//					rec[c] = true;
//			}
//		}
//	}
//	return true;
//}
//bool solveSudokus(vector<vector<char> > &board) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	char c;
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			c = board[i][j] - '0';
//			if (c < 1 || c > 9)
//			{
//				for (int k = 1; k <= 9; k++)
//				{
//					board[i][j] = k + '0';
//					if (isValid(board, i, j) && solveSudokus(board))
//					{
//						return true;
//					}
//					board[i][j] = '.';
//				}
//				return false;
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	string str[9] = {"..9748...","7........",".2.1.9...","..7...24.",".64.1.59.",".98...3..","...8.3.2.","........6","...2759.."};
//	vector<char> row(9,' ');
//	vector<vector<char>> board(9, row);
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			board[i][j] = str[i][j];
//		}
//	}
//
//	solveSudokus(board);
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j< 9; j++)
//		{
//			cout<<board[i][j]<<" ";
//		}
//		cout<<endl;
//	}
//	return 0;
//}
