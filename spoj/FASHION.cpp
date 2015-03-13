#include <iostream>
#include <cstring>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(i=a;i<b;++i)
int main() {
	// your code goes here
	int i,j;
	int n;
	int t;
	int m[1000],f[1000];
	long int ans;
	scanf("%d",&t);
	while(t--)
	{
		ans = 0;
		scanf("%d",&n);
		rep(i,0,n)scanf("%d",f+i);
		rep(i,0,n)scanf("%d",m+i);
		sort(m,m+n);
		sort(f,f+n);
		rep(i,0,n)ans += f[i]*m[i];
		printf("%ld\n",ans);
	}
	return 0;
}
