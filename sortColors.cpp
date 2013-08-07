//#include <iostream>
//
//using namespace std;
//
//void sortColors(int A[], int n) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int zero = 0, two = n - 1;
//	for (int i = 0; i <= two && zero < two; i++)
//	{
//		if (A[i] == 0)
//		{
//			swap(A[i], A[zero]);
//			zero++;
//		}
//		else if (A[i] == 2)
//		{
//			while(two > i && A[two] == 2)
//				two--;
//			swap(A[i], A[two]);
//			if (A[i] == 0)
//			{
//				swap(A[i], A[zero]);
//				zero++;
//			}
//		}
//		else{}
//	}
//}
//
//int main()
//{
//	int n;
//	cin>>n;
//
//	int *A = new int[n];
//
//	for (int i = 0; i < n; i++)
//	{
//		cin>>A[i];
//	}
//
//	sortColors(A, n);
//
//	for (int i = 0; i< n; i++)
//	{
//		cout<<A[i]<<" ";
//	}
//
//	return 0;
//}