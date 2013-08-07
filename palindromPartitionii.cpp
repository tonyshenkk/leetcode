//#include <string>
//#include <vector>
//
//bool IsPalindrome(string s, int i, int j){
//	if(i==j)
//		return true;
//	while(i<j){
//		if(s[i++]!=s[j--])
//			return false;
//	}
//	return true;
//}
//int minCut(string s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int n = s.length();
//	if(n==0 || n==1)    
//		return 0;
//	vector<int> min;
//	for(int i=0; i<n; i++)
//		min.push_back(0);
//	int tmp, ans;
//	for(int inter=1; inter<n; inter++){
//		if(IsPalindrome(s, 0, inter)){
//			min[inter]=0;
//		}
//		else{
//			ans = n+1;
//			for(int k=0; k<inter; k++){
//				if(IsPalindrome(s, k+1, inter))
//					tmp = min[k]+1;
//				else
//					tmp = min[k]+inter-k;
//				if(tmp<ans)
//					ans = tmp;
//			}
//			min[inter]=ans;
//		}
//	}
//	return min[n-1];   
//}