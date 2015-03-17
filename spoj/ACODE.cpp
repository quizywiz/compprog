#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;

	long long int x,y,z,w;
//	cout<<INT_MAX<<endl;
	char a[5005];
	scanf("%s",a);
	while(a[0]!='0')
	{	
		y=0;
		for(x=0;a[x];++x)
		{
			if(a[x]=='0')a[y-1]='D';
			else a[y++]=a[x];
		}
		a[y]=0;
	//	printf("%s\n",a);
		y=1;z=1;w=1;
		
		for(x=1;a[x];++x)
		{
			if((a[x-1]<'2'&&a[x]!='D')||(a[x-1]=='2' && a[x]<='6'))
			{
				w=z+y;
				
				
			}
			y=z;
			z=w;
			//printf("%d ",z);
			
		}
		printf("%lld\n",z);
		scanf("%s",&a);
	}

	return 0;
}
