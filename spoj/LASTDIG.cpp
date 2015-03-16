#include <iostream>
#include <cstring>
#include <cstdio>
#include<bits/stdc++.h>
using namespace std;
#define rep(i,a,b) for(i=a;i<b;++i)
int main() {
	// your code goes here
	int i,j;
	long int n;
	int t;
	string a;
	long long int b;
	int al;
	scanf("%d",&t);
	while(t--)
	{
		j=0;
		cin>>a;
		scanf("%lld",&b);
		al= a[a.size()-1]-'0';
		n=al;
		if(b==0){j=1;}
		b = b&3;
		if(b==0)b=4;
		rep(i,0,b-1)n*=al;
		
		printf("%d\n",(j==1?1:n%10));
	}
	return 0;
}
