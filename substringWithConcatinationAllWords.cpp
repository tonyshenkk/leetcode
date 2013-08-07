//#include <vector>
//#include <string>
//
//using namespace std;
//
//
//vector<int> findSubstring(string S, vector<string> &L) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	map<string, int> words;
//	map<string, int> count;
//	vector<int> result;
//	int wordNum = L.size();
//	if (wordNum == 0) return result;
//	for (int i = 0; i < wordNum; ++i)
//		++words[L[i]];
//
//	int wordSize = L[0].size();
//	int slength = S.size();
//	for (int i = 0; i <= slength - wordSize*wordNum; ++i)
//	{
//		count.clear();
//		int j = 0;
//		for (; j < wordNum; ++j)
//		{
//			string w = S.substr(i+j*wordSize, wordSize); 
//			if(words.find(w) == words.end())  
//				break;  
//			++count[w];  
//			if(count[w] > words[w])  
//				break;  
//		}
//		if (j == wordNum) result.push_back(i);
//	}
//	return result;
//}
//
//int main()
//{
//	string s, t;
//	vector<string> L;
//	int n;
//	cin>>n;
//	for (int i = 0; i < n; i++)
//	{
//		cin>>t;
//		L.push_back(t);
//	}
//
//	vector<int> res = findSubstring(s, L);
//
//	return 0;
//	
//}