#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;

	int x,y,z;
//	cout<<INT_MAX<<endl;
	int a[2][1000001]={0};
	scanf("%d",&t);
	y=0;
	while(t)
	{	
		z=1;
		for(x=1;x<=t;++x)scanf("%d",a[y]+x);
		for(x=1;x<=t;++x)a[1-y][a[y][x]]=x;
		for(x=1;x<=t;++x)if(a[y][x]!=a[1-y][x])z=0;
		if(z)printf("ambiguous\n");
		else printf("not ambiguous\n");
		y=1-y;
		scanf("%d",&t);
	}

	return 0;
}
