//#include <iostream>
//#include <string>
//
//using namespace std;
//
//string simplify(string path)
//{
//	int len = path.length(), i = 0;
//	string s = "", temp = "";
//
//	while(i < len)
//	{
//		int j = i + 1;
//		while(j < len && path.at(j) != '/')
//			j++;
//		temp = path.substr(i, j - i);
//		if (temp == "/..")
//		{
//			int k = s.length() - 1;
//			while(k >=0 && s.at(k) != '/')
//				k--;
//			s = s.substr(0, k);
//		}
//		else if (temp == "/." || temp == "/")
//		{
//		}
//		else
//			s += temp;
//		i = j;
//	}
//	if (s == "" || s.at(0) != '/')
//	{
//		s = "/" + s;
//	}
//	return s;
//}
//
//int main()
//{
//	string path, p;
//	cin>>path;
//
//	p = simplify(path);
//
//	cout<<p;
//
//	return 0;
//}