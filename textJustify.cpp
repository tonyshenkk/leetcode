//#include <iostream>
//#include <vector>
//#include <string>
//
//using namespace std;
//
//vector<string> fullJustify(vector<string> &words, int L) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int len = 0;
//	vector<string>::iterator ite1 = words.begin(), ite2, ite3;
//	vector<string> res;
//	string s = "";
//
//	for (ite2 = ite1; ite1 != words.end(); ite1++)
//	{
//		if ( ite1->length() + (ite1 - ite2) + len <= L)
//		{
//			len =len + ite1->length();
//		}
//		else
//		{
//			int j = ite1 - ite2;
//			int gap = L - len;
//			//int ev = gap / (j - 1);
//			//int extra = gap % (j - 1);
//			int ev, extra;
//			if (j == 1)
//			{
//				ev = gap;
//				extra = 0;
//			}
//			else
//			{
//				ev = gap / (j - 1);
//				extra = gap % (j - 1);
//			}
//			string s1(ev, ' '), s2(ev + 1, ' ');
//			for (ite3 = ite2; ite3 != ite1; ite3++)
//			{
//				if (ite3 - ite2 < extra)
//				{
//					s += *ite3 + s2;
//				}
//				else if (ite3 - ite2 == j - 1 && j != 1)
//				{
//					s += *ite3;
//				}
//				else
//					s += *ite3 + s1;
//			}
//			ite2 = ite1;
//			len = ite1->length();
//			res.push_back(s);
//			s = "";
//		}
//	}
//	if (ite2 != ite1)
//	{
//		int j = ite1 - ite2;
//		int gap = L - len - j + 1;
//		for (ite3 = ite2; ite3 != ite1; ite3++)
//		{
//			s += *ite3;
//			if (ite1 - ite3 > 1)
//			{
//				s += " ";
//			}
//		}
//		string s1(gap, ' ');
//		s += s1;
//		res.push_back(s);
//		////int ev = gap / (j - 1);
//		////int extra = gap % (j - 1);
//		//int ev, extra;
//		//if (j == 1)
//		//{
//		//	ev = gap;
//		//	extra = 0;
//		//}
//		//else
//		//{
//		//	ev = gap / (j - 1);
//		//	extra = gap % (j - 1);
//		//}
//		//string s1(ev, ' '), s2(ev + 1, ' ');
//		//for (ite3 = ite2; ite3 != ite1; ite3++)
//		//{
//		//	if (ite3 - ite2 < extra)
//		//	{
//		//		s += *ite3 + s2;
//		//	}
//		//	else if (ite3 - ite2 == j - 1 && j != 1)
//		//	{
//		//		s += *ite3;
//		//	}
//		//	else
//		//		s += *ite3 + s1;
//		//}
//		////ite2 = ite1;
//		////len = ite1->length();
//		//res.push_back(s);
//		//s = "";
//	}
//	return res;
//}
//
//int main()
//{
//	vector<string> word;
//	vector<string> res;
//	int L;
//	cin>>L;
//
//	string str;
//	while(cin>>str)
//	{
//		word.push_back(str);
//	}
//
//	res = fullJustify(word, L);
//
//	for (size_t i = 0; i < res.size(); i++)
//	{
//		cout<<res[i]<<endl;
//	}
//	return 0;
//}