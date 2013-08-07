//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//bool searchMatrix(vector<vector<int> > &matrix, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int row = matrix.size();
//	if (row < 1)
//	{
//		return false;
//	}
//	int col = matrix[0].size();
//
//	int low = 0, high = row * col - 1;
//	int mid, c, r;
//	while(low <= high)
//	{
//		mid = (low + high) / 2;
//		r = mid / col;
//		c = mid % col;
//		if (matrix[r][c] == target)
//		{
//			return true;
//		}
//		else if (matrix[r][c] > target)
//		{
//			high = mid - 1;
//			
//		}
//		else
//			low = mid + 1;
//	}
//	return false;
//}