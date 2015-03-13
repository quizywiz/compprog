#include <stdio.h>
#include <string.h>
int revnum(int num)
{
	int retnum = 0;
	while(num!=0)
	{
		retnum = retnum*10 + num%10;
		num = num/10;
	}
	return retnum;
}	
int main(void) {
	// your code goes here
	int numinp = 0;
	scanf("%d",&numinp);
	int a,b,i=0;
	while(i<numinp)
	{
		scanf("%d",&a);
		scanf("%d",&b);
		printf("%d\n",revnum(revnum(a)+revnum(b)));
		i++;
	}
	return 0;
}
