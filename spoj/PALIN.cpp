#include <iostream>
#include <cstdio>
#include <cmath>
#include <bits/stdc++.h>
#define rep(i,a,b) for(i=a;i<b;++i)
using namespace std;
int t,n,i,j,k,l;
int b[305];
string a[305];

void addone(string& s,int last)
{
	int i=last-1;
	bool cont=false;
	
	do
	{
		
		
		cont=false;
		s[i]+=1;
		if(s[i]=='0'+10){s[i]-=10;cont=true;}
		--i;
	//	cout<<s<<endl;
	}while(cont&&i>=0);
	if(cont)s=to_string(1)+s;
}
int main() {
	// your code goes here
	scanf("%d",&n);
	string s;
	int len;
	while(n--)
	{
		cin>>s;
		addone(s,s.size());
	//	cout<<"add "<<s<<endl;
		len=s.size();
		i=len/2-1;j=len/2;
		if(len&1)j=len/2 + 1;
		for(;j<len;++j,--i)
		{
			if(s[i]==s[j])continue;
			break;
		}
	//	cout<<i<<" "<<j<<endl;
		if(j<len)
		{
			if(s[j]<s[i])
			{
				for(;j<len;++j,--i)
				{
					s[j]=s[i];
				}
			}
			else
			{
				
				addone(s,(1+ len)/2);
			//	cout<<"add "<<s<<endl;
				for(j=(len+1)/2 ,i=len/2-1;j<len;++j,--i)
				{
					s[j]=s[i];
				}
			}
		}
		cout<<s<<endl;
	}
	return 0;
}
