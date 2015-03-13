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
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	while(a!=0 || b!=0 || c!=0)
	{
		if(2*b==a+c && b-a!=0)
		{
			cout<<"AP "<<c+b-a<<endl;
		}
		else
		{
			cout<<"GP "<<(c*b)/a<<endl;
		}
		scanf("%d%d%d",&a,&b,&c);
	}
	return 0;
}
