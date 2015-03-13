#include <iostream>
#include <cstdio>
#define rep(i,a,b) for(i=a;i<b;++i)
using namespace std;

int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	int x,y;
	int ans;
	while(t--)
	{
		scanf("%d%d",&x,&y);
		if(!(x==y || x==y+2)){printf("No Number\n");continue;}
		ans = 4*(y/2);
		if(x==y && x&1)
			ans++;
		else if(x==y);
		else if(x&1)
			ans+=3;
		else ans+=2;
		printf("%d\n",ans);
	}
	return 0;
}
