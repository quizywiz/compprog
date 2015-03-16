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

	scanf("%d",&n);
	bool a[10004]={0};
	int num=0;
	rep(i,1,n+1)
	{
		rep(j,i,n+1)
		{
			if(j*i<=n)++num;
			else break;
		}
	}
	printf("%d\n",num);
	
	return 0;
}
