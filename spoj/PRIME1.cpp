#include <iostream>
#include<cstdio>
#include <cmath>
#include<vector>
#define mn 1000000001 
#define sqrtmn 31624
using namespace std;
bool iscomp[mn];
int main() {
	// your code goes here
	long long int i,j,k,t;
	vector<long long int> primes;
	long long int n,m;
	//scanf("%lld",&t);
	long long int x = sqrtmn;
	iscomp[1]=1;
	for(i=2;i<=x;++i)
	{
	//	printf("%d\n",iscomp[i]);
		if(!iscomp[i])
		{
		//	printf("%lld\n", i);
			primes.push_back(i);
			for(j=i*i;j<=x;j+=i)
				iscomp[j]=1;
		}
	}
	iscomp[1]=1;
	scanf("%lld",&t);
	while(t--)
	{
		scanf("%lld%lld",&m,&n);
		for(auto x : primes)
		{
		//	printf("%lld: ",x);
			i= (m%x)?m+x - (m%x):m;
			for(;i<=n;i+=x)
			{
		//		printf("%lld ",i);
				if(x!=i)
				iscomp[i]=1;
			}
	//		printf("\n");
		}
		for(i=m;i<=n;++i) if(!iscomp[i])printf("%lld\n",i);
		printf("\n");
	}
	return 0;
}
