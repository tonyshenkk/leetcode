//#include <string>
//#include <vector>
//
//vector<string> getPattens(const char *p) {
//	vector<string> ret;
//	int ei = 0;
//	string *s = NULL;
//	while(true) {
//		if(p[ei] == '*' || p[ei] == '\0') {
//			if(s) {
//				//patten found
//				ret.push_back(*s);
//				delete s;
//				s = NULL;
//			}
//			if(p[ei] == '\0') break;
//		} else {
//			if(!s) {
//				s = new string();
//			}
//			s->push_back(p[ei]);
//		}
//		++ei;
//	}
//	return ret;
//}
//
//int matchStr(const char *s, string &pat, int basei, int baseilmt) {
//	for(; basei <= baseilmt; ++basei) {
//		for(int j = 0; j < pat.size(); ++j) {
//			if(pat[j] != '?' && pat[j] != s[basei + j])
//				break;
//			if(j == pat.size() - 1) {
//				return basei;
//			}
//		}
//	}
//	return -1;
//}
//
//bool isMatch(const char *s, const char *p) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if(s == NULL || p == NULL) return false;
//
//	//1. get pattens splited by '*' or continuous '*'s
//	vector<string> pattens = getPattens(p);
//	if(pattens.size() == 0) {
//		if(*p == '*') //p is pure '*'s
//			return true;
//		else //p is empty
//			return *s == '\0';
//	}
//
//	//2. match each patten one by one on s
//	int slen = strlen(s);
//	int plen = strlen(p);
//	int sb = 0;
//	bool restrictFront = *p != '*';
//	bool restrictRear = p[plen-1] != '*';
//	for(int pi = 0; pi < pattens.size() ; ++pi) {
//		string &pat = pattens[pi];
//		int sbl = slen - pat.size();
//
//		if(sbl < sb) return false;
//
//		if(pi == 0 && restrictFront) {
//			//first patten may be need to match exactly from 0
//			sbl = 0;
//		} else if (pi == pattens.size() - 1 && restrictRear) {
//			//last patten may be need to match exactly from rear of s
//			sb = slen - pat.size();
//			sbl = sb;
//			//cout<<sb<<","<<sbl<<"|";
//		}
//
//		int matchbase = matchStr(s,pat,sb,sbl);
//		if(-1 == matchbase) {
//			//cout<<"pat:"<<pi<<","<<pat;
//			return false;
//		}
//		else {
//			//cout<<sb<<","<<sbl<<","<<pat;
//			sb = matchbase + pat.size();
//		}
//	}
//	if(pattens.size() == 1) {
//		if (restrictFront && restrictRear) {
//			return s[sb] == '\0';
//		}
//		//cout<<s[sb];
//		return true;
//	}
//	return true;
//
//
//	for(int i = 0; i < pattens.size(); ++i){
//		cout<<pattens[i];
//		cout<<"|";
//	}
//	return false;
//}