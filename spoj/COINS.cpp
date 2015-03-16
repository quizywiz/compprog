#include <iostream>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <map>
using namespace std;
#define rep(i,a,n) for(i=a;i<n;i++)
long long int memo(long long int n, map<long long int,long long int> &m)
{
	if(n==0) return 0;
	if(m[n]!=0)return m[n];
	return m[n]=max(n,memo(n/2,m)+memo(n/3,m)+memo(n/4,m));
}

int main() {
	// your code goes here
	//int t;
	//scanf("%d",&t);
	long long int n;
	map<long long int,long long int> m;
	while(scanf("%lld",&n)!=EOF)
	{
		//scanf("%lld",&n);
		printf("%lld\n",memo(n,m));
	}
	return 0;
}
