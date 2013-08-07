//#include <vector>
//#include <string>
//#include <iostream>
//
//using namespace std;
//bool isValidSudoku(vector<vector<char> > &board) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	bool col[9][9] = {false}, row[9][9] = {false};
//	bool rec[9][9] = {false};
//	char c;
//
//	for (int i = 0; i < 9; i++)
//	{
//		for (int j = 0; j < 9; j++)
//		{
//			c = board[i][j];
//
//			if (c > '0' && c <= '9')
//			{
//				if (col[j][c - '1'] || row[i][c - '1'] || rec[j / 3 + i / 3 * 3][c - '1'])
//				{
//					return false;
//				}
//				else
//				{
//					col[j][c - '1'] = true;
//					row[i][c - '1'] = true;
//					rec[j / 3 + i / 3 * 3][c - '1'] = true;
//				}
//			}
//		}
//	}
//	return true;
//}
//
//int main()
//{
//	string str[9]={"426583791","581679234","397412586","643195827","975824613","218736459","164358972","752961348","839247165"};
//	vector<char> row(9,' ');
//	vector<vector<char>> board(9, row);
//
//	for (int i = 0; i < 9;i++)
//	{
//		for (int j = 0; j < 9;j++)
//		{
//			board[i][j] = str[i][j];
//		}
//	}
//
//	bool check;
//
//	check = isValidSudoku(board);
//
//	cout<<check<<endl;
//
//	return 0;
//}
//
////[
////"53..7....",
////"6..195...",
////".98....6.",
////"8...6...3",
////"4..8.3..1",
////"7...2...6",
////".6....28.",
////"...419..5",
////"....8..79"
////]