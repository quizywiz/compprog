#include <stdio.h>

int main(void) {
	// your code goes here'
	int T;
	int t=0;
	scanf("%d",&T);
	long int m;
	int sum;
	while(t<T)
	{
		sum=0;
		scanf("%ld",&m);
		while(m>=5)
		{
			sum += m/5;
			m/=5;
		}
		printf("%d\n",sum);
		t++;
	}
	return 0;
}
