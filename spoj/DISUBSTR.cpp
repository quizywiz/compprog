#include <bits/stdc++.h>
using namespace std;
vector<tuple<int,int,int>> suffix;
int c[13][1025];
int lcp[1025];
void suff_con(string s)
{
	int n = s.size();
	suffix.resize(n);
	for(int i = 0;i<n;++i)
	{
		c[0][i]=s[i],lcp[i]=0;
//		cout<<c[0][i]<<" ";
	}
	if(s.size()==1)return;
//	cout<<endl;
	int step = 1;
	int iter = 1;
	while(step<n)
	{
		for(int i = 0;i<n;++i)
		{
			suffix[i] = make_tuple(c[iter-1][i],-1,i);
			if(i+step<n)get<1>(suffix[i])=c[iter-1][i+step];
		}
		sort(suffix.begin(),suffix.end());
		
		int cl = 0;
		c[iter][get<2>(suffix[0])]=cl++;
		for(int i = 1; i<n;++i)
		{
			if(get<0>(suffix[i])==get<0>(suffix[i-1]) && get<1>(suffix[i])==get<1>(suffix[i-1]))
			{
				c[iter][get<2>(suffix[i])] = cl-1;
			}
			else c[iter][get<2>(suffix[i])] = cl++;
		}
//		for(int i = 0; i<n; ++i)cout<<c[iter][i]<<" ";
//		cout<<endl;
		
		step <<= 1;
		++iter;
	}
//	for(int i = 0; i<n; ++i)cout<<get<2>(suffix[i])<<" ";
//	cout<<endl;
	lcp[0]=0;
	for(int j=1;j<n;++j)
	{
		int i=get<2>(suffix[j]);
		int i2 = get<2>(suffix[j-1]);
//		cout<<i<<endl;
		int prefix_l = 0;
		for(int k = (iter-1);k>=0 && i<n && i2<n; --k)
		{
//			cout<<i<<" "<<i2<<" "<<k<<endl;
			if(c[k][i]==c[k][i2])
			{
				prefix_l += (1<<k);
				i += (1<<k);
				i2 += (1<<k);
			}
		}
//		cout<<endl;
		lcp[j]=prefix_l;
//		cout<<prefix_l<<endl;
	}
//	cout<<endl;
}
int main() {
	// your code goes here
	string s;
	int t;
	cin>>t;
	while(t--)
	{
		cin>>s;
		
		suff_con(s);
		int ans = s.size();
		ans *= ans+1;
		ans>>=1;
//		cout<<ans<<endl;
		for(int i=0;i<s.size();++i)
		{
			ans -= lcp[i];
		}
		cout<<ans<<endl;
	}
	return 0;
}
