//#include <vector>
//
//vector<vector<int> > combinationSum(vector<int> &candidates, int target) {
//	// Start typing your C/C++ solution below
//	// DO NOT write int main() function
//	if (candidates.size() == 0)
//		return vector<vector<int> >();
//	sort(candidates.begin(),candidates.end());
//	vector<vector<vector<int> > > *pR = new vector<vector<vector<int> > >(target + 1);
//	vector<vector<vector<int> > > *pT = new vector<vector<vector<int> > >(target + 1);
//	for (int t = 1; t <= target; ++ t)
//	{
//		int c = candidates[0];
//		if (t % c == 0)
//		{
//			(*pR)[t].push_back(vector<int>(t/c,c));
//		}
//	}
//	for (int k = 1; k < candidates.size(); ++k)
//	{
//		int ck = candidates[k];
//		for (int t = 1 ; t <= target; ++t)
//		{
//			(*pT)[t].clear();
//			for (int p = 0; p * ck <= t; ++p)
//			{
//				int remain = t - ck * p;
//				if (remain == 0)
//				{
//					(*pT)[t].push_back(vector<int>(p,ck));
//				}
//				else
//				{
//					vector<vector<int> > &rRemain = (*pR)[remain];
//					for (int irr = 0; irr < rRemain.size() ;++ irr)
//					{
//						vector<int> newSum(rRemain[irr]);
//						for(int ip = 0; ip < p; ++ip)
//							newSum.push_back(ck);
//						(*pT)[t].push_back(newSum);
//					}
//				}
//			}
//		}
//		vector<vector<vector<int> > > *pTemp = pR;
//		pR = pT;
//		pT = pTemp;
//	}
//	return (*pR)[target];
//}