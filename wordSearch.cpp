//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//bool found(int i, int j, int pos, vector<vector<char> > &board, string word,vector<vector<bool>> &check)
//{
//	if (pos == word.length())
//	{
//		return true;
//	}
//	if (i >= 0 && i < board.size() && j >= 0 && j < board[i].size() && pos < word.length() && check[i][j] && board[i][j] == word[pos])
//	{
//		check[i][j] = false;
//		if (found(i + 1, j, pos + 1, board, word, check) ||found(i - 1, j, pos + 1, board, word, check) || found(i, j + 1, pos + 1, board, word, check) ||
//			found(i, j - 1, pos + 1, board, word, check))
//		{
//			return true;
//		}
//		else
//		{
//			check[i][j] = true;
//			return false;
//		}
//		
//	}
//	else
//		return false;
//}
//
//bool exist(vector<vector<char> > &board, string word) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int pos = 0;
//	vector<vector<bool>> check;
//	for (int i = 0; i< board.size();i++)
//	{
//		vector<bool> temp(board[i].size(), true);
//		check.push_back(temp);
//	}
//	for (int i =0; i < board.size(); i++)
//	{
//		for (int j = 0; j < board[i].size(); j++)
//		{
//			if (found(i, j, pos, board, word, check))
//			{
//				return true;
//			}
//		}
//	}
//	return false;
//}
// 
//
//int main()
//{
//	vector<vector<char> > board;
//	string word;
//
//	int m,n;
//	cin>>m>>n;
//
//	vector<char> temp;
//	char c;
//	for (int i = 0; i < m; i++)
//	{
//		temp.clear();
//		for (int j = 0; j < n; j++)
//		{
//			cin>>c;
//			temp.push_back(c);
//		}
//		board.push_back(temp);
//	}
//	cin>>word;
//
//	bool r = exist(board, word);
//
//	cout<<r;
//}