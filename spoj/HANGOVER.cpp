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
	//scanf("%lld",&t);
	long double a;
	scanf("%Lf",&a);
	//printf("a is %Lf",a);
	int num;
	long double length;
	while(a!=0)
	{
		length=0.5;
		num=1;
		while(length<a)
		{
			++num;
			length += (1.0/(num+1));
			//printf("length is %Lf",length);
		}
		printf("%d card(s)\n",num);
		scanf("%Lf",&a);
	}
	
	return 0;
}
