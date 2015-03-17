#include <iostream>
#include <cstdio>
#include <climits>
#define getc getchar_unlocked
#define putc(x) putchar_unlocked(x)
inline void fasti(long long int &x)
{
	char temp;
	temp = getc();
	if(temp=='m')
	{
		
		while((temp>='a' && temp<='z')||(temp>='0'&&temp<='9'))temp =getc();
		x= (long long)INT_MAX+1;return;
	}
	int sign = 1;
	while(temp>'9' || temp<'0'){if(temp == '-') sign = -1; temp = getc();};
	x = 0;
	while(temp<='9' && temp>='0')
	{
		x=(x<<3) + (x<<1) + temp - '0';
		temp = getc();
		if(temp=='m')
		{
		
			while((temp>='a' && temp<='z')||(temp>='0'&&temp<='9'))temp =getc();
			x= (long long)INT_MAX+1;return;
		}
	}
	
	x = x*sign;
}
inline void fasto(int x)
{
if(x==0){putc('0');return;}
int rev=x,cz=0;
while(rev%10==0){cz++;rev/=10;}
int nrev=0;
while(x!=0){nrev = (nrev<<1)+(nrev<<3)+(x%10);x/=10;}
while(nrev!=0){putc((nrev%10) +'0');nrev/=10;}
while(cz--)putc('0');
}
inline void fasti2(int &x)
{
	char temp;
	temp = getc();
	int sign = 1;
	while(temp>'9' || temp<'0'){if(temp == '-') sign = -1; temp = getc();};
	x = 0;
	while(temp<='9' && temp>='0')
	{
		x=(x<<3) + (x<<1) + temp - '0';
		temp = getc();
	}
	x = x*sign;
}
using namespace std;

int main() {
	// your code goes here
	int t;
	fasti2(t);
	getc();
	long long int x,y,z;
//	cout<<INT_MAX<<endl;
	while(t--)
	{	
		fasti(x);
		getc();
		getc();
		fasti(y);
		getc();
		getc();
		fasti(z);
		getc();
//	cout<<x<<" " <<y<<" "<<z<<endl;
		if(x>=(long long)INT_MAX+1)printf("%lld + %lld = %lld\n",z-y,y,z);
		else if(y>=(long long)INT_MAX+1)printf("%lld + %lld = %lld\n",x,z-x,z);
		else printf("%lld + %lld = %lld\n",x,y,x+y);
	}

	return 0;
}
