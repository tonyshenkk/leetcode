//#include <iostream>
//#include <string>
//
//using namespace std;
//string longestPalindrome(string s) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	int low, high;
//	int maxlen = 0, li,hi;
//	int i,j;
//
//	for (low = 0; low < s.length(); low ++)
//	{
//		for (high = s.length() - 1; high >= low && high - low + 1 > maxlen; high--)
//		{
//			if (s.at(low) == s.at(high))
//			{
//				for (i = low, j = high; i < j; i++, j--)
//				{
//					if (s.at(i) != s.at(j))
//					{
//						break;
//					}
//				}
//
//				if ((j - i < 1)&& high - low + 1> maxlen)
//				{
//					maxlen = high - low + 1;
//					li = low;
//					hi = high;
//				}
//			}
//		}
//	}
//
//	return s.substr(li, maxlen);
//}
//
//int main()
//{
//	string s="FourscoreandsevenyearsagoourfaathersbroughtforthonthiscontainentanewnationconceivedinzLibertyanddedicatedtothepropositionthatallmenarecreatedequalNowweareengagedinagreahtcivilwartestingwhetherthatnaptionoranynartionsoconceivedandsodedicatedcanlongendureWeareqmetonagreatbattlefiemldoftzhatwarWehavecometodedicpateaportionofthatfieldasafinalrestingplaceforthosewhoheregavetheirlivesthatthatnationmightliveItisaltogetherfangandproperthatweshoulddothisButinalargersensewecannotdedicatewecannotconsecratewecannothallowthisgroundThebravelmenlivinganddeadwhostruggledherehaveconsecrateditfaraboveourpoorponwertoaddordetractTgheworldadswfilllittlenotlenorlongrememberwhatwesayherebutitcanneverforgetwhattheydidhereItisforusthelivingrathertobededicatedheretotheulnfinishedworkwhichtheywhofoughtherehavethusfarsonoblyadvancedItisratherforustobeherededicatedtothegreattdafskremainingbeforeusthatfromthesehonoreddeadwetakeincreaseddevotiontothatcauseforwhichtheygavethelastpfullmeasureofdevotionthatweherehighlyresolvethatthesedeadshallnothavediedinvainthatthisnationunsderGodshallhaveanewbirthoffreedomandthatgovernmentofthepeoplebythepeopleforthepeopleshallnotperishfromtheearth";
//	string temp;
//	//cin>>s;
//
//	temp = longestPalindrome(s);
//
//	cout<<temp<<endl;
//
//	return 0;
//}
