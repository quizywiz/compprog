#include <iostream>
#include <cstring>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(i=a;i<b;++i)
int main() {
	// your code goes here
	long long int i=0,j=0;
	long long int n=0;
	long long int t=0;

	scanf("%lld",&t);
	long long int ans;
	
	while(t--)
	{
		ans=0;
		scanf("%lld",&n);
		//printf("n%lldn\n",n);
		rep(j,0,n)
		{
			scanf("%lld",&i);
			//printf("i%lldi ",i);
			ans += i;
			//printf("ans%lldans",ans);
			while(ans>=n){ans%=n;}
			//printf("\n");
		}
		if(ans==0)printf("YES\n");
		else printf("NO\n");
	}
	
	return 0;
}
