#include <iostream>
#include <cstdio>
#include <climits>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	int x,y,z;
//	cout<<INT_MAX<<endl;
	int a[10000]={0};
	while(t--)
	{	
		cin>>x;
		a[0]=1;
		int sum=1;
		int add=2;
		while(x>sum)
		{
			sum += add;
			++add;
		}
		//cout<<sum<<" "<<add<<endl;
		if(add&1)
		printf("TERM %d IS %d/%d\n",x,add+x-sum-1,sum+1-(x));
		else printf("TERM %d IS %d/%d\n",x,sum+1-(x),add+x-sum-1);
	}

	return 0;
}
