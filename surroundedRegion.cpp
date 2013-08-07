//#include <vector>
//#include <iostream>
//
//void change(vector<vector<char>> &board, int i, int j)
//{
//	if (i< 0 || j < 0 || i > board.size() || j > board[0].size())
//	{
//		return;
//	}
//	if (board[i][j] == 'O')
//	{
//		board[i][j] = '#';
//		change(board, i - 1, j);
//		change(board, i + 1, j);
//		change(board, i, j - 1);
//		change(board, i, j + 1);
//	}
//}
//
//void solve(vector<vector<char>> &board) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (board.size() < 1)
//	{
//		return;
//	}
//
//	int row = board.size(), col = board[0].size();
//	for (int  i = 0; i < col; i++)
//	{
//		change(board, 0, i);
//	}
//	for (int i = 0; i < row; i++)
//	{
//		change(board, i, 0);
//	}
//	for (int i = 0; i < row; i++)
//	{
//		change(board, i, col - 1);
//	}
//	for (int i = 0; i < col; i++)
//	{
//		change(board, row - 1, i);
//	}
//
//	for (int i = 0; i < row; i++)
//	{
//		for (int j = 0; j < col; j++)
//		{
//			if (board[i][j] == 'O')
//			{
//				board[i][j] = 'X';
//			}
//			else if (board[i][j] == '#')
//			{
//				board[i][j] = 'O';
//			}
//		}
//	}
//}