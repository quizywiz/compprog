#include <cstdio>
#define getc getchar_unlocked
#define putc(x) putchar_unlocked(x)
inline void fasti(int &x)
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