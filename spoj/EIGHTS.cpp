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
	while(t--)
	{
		scanf("%lld",&n);
		i=192 + 250*(n-1);
		cout<<i<<endl;
	}
	
	return 0;
}
