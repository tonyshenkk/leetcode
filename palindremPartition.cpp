//#include <vector>
//
//class Solution {
//public:
//	vector<vector<int> > v;
//	int n;
//	string org;
//	vector<vector<string>> partition(string s) {
//		int len = s.size();
//		n = len;
//		org = s;
//		int dp[len][len] ;
//		memset(dp, 0, sizeof(dp));
//		for (int i = 0; i < len; i++) {
//			dp[i][i] = 1;
//			if (i < len - 1 && s[i] == s[i+1]) dp[i][i+1] = 1;
//		}
//
//		for (int l = 2; l < len; l++) {
//			for (int i = 0; i < len; i++) {
//				int j = i+l;
//				if (j >= len) continue;
//				if (dp[i+1][j-1] == 1 && s[i] == s[j]) dp[i][j] = 1;
//			}
//		}
//		v.clear();
//		v.resize(len);
//		for (int i = 0; i < len; i++) {
//			for (int j = i; j < len; j++) {
//				if (dp[i][j] == 1) v[i].push_back(j);
//			}
//		}
//
//		vector<vector<string> > res;
//		vector<string> str;
//		f(res, str, -1);
//		return res;
//	}
//
//	void f(vector<vector<string> >& res, vector<string>& str, int cur) {
//		if (cur == n - 1) {
//			res.push_back(str);
//			return;
//		}
//
//		int next = cur+1;
//		for (int i = 0; i < v[next].size(); i++) {
//			str.push_back(org.substr(next, v[next][i]-next+1));
//			f(res, str, v[next][i]);
//			str.pop_back();
//		}
//	}
//};