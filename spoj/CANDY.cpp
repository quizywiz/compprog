#include <iostream>
#include <cstring>
#include <cstdio>
#include<string>
#include <sstream>
using namespace std;
#define rep(i,a,b) for(i=a;i<b;++i)
int main() {
	// your code goes here
	int i,j;
	int n;
	int a[10000];
	scanf("%d",&n);
	long int sum;
	long int diff;
	while(n!=-1)
	{
		diff=0;
		sum=0;
		//printf("n is %d",n);
		rep(i,0,n){scanf("%d",a+i);sum+=a[i];}
		if(sum%n!=0){printf("-1\n");scanf("%d",&n);continue;}
		sum /= n;
		rep(i,0,n){diff += (sum>a[i]?sum-a[i]:0);}
		printf("%ld\n",diff);
		scanf("%d",&n);
	}
	return 0;
}
