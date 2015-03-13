#include <stdio.h>

int main(void) {
	// your code goes here'
	int m;
	long int sum;
	while(scanf("%ld",&m),m!=0)
	{
		sum=0;
		int k;
		for(k=0;k<=m;k++)
		sum += k*k;
		printf("%ld\n",sum);
	}
	return 0;
}
