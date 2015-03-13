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
	int cols;
	string s;
	scanf("%d",&cols);
	stringstream h[20];
	while(cols!=0)
	{
		rep(i,0,20){h[i].clear();h[i].str("");}
		cin>>s;
		for(i=0;i<s.size();i+=cols*2)
		{
			if(s.size()-i==cols)break;
			rep(j,0,cols)
			{
				h[j]<<s[i+j]<<s[i+2*cols-j-1];
			}
		}
		if(s.size()-i==cols)
		{
			rep(j,0,cols)h[j]<<s[i+j];
		}
		rep(i,0,cols)cout<<h[i].str();
		cout<<endl;
		scanf("%d",&cols);
	}
	return 0;
}
