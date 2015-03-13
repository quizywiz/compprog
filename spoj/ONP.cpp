#include <iostream>
#include <stack>
#include <map>
#include <cstdio>
#define rep(i,a,b) for(i=a;i<b;++i)
#include <string>
using namespace std;

int main() {
	// your code goes here
	string expr;
	int t,i;
	scanf("%d",&t);
	stack<char> h;
	map<char,int> m;
	m['^']=5;
	m['/']=4;
	m['*']=3;
	m['-']=2;
	m['+']=1;
	while(t--)
	{
		cin>>expr;
		rep(i,0,expr.size())
		{
			
			if(expr[i]=='(')
			{
				h.push(expr[i]);
				//cout<<"pushing ( " <<i<<endl;
			}
			else if(expr[i]>='a' && expr[i]<='z')
				printf("%c",expr[i]);
			else if(expr[i]==')') 
			{
				while(h.top()!='(')
				{
					printf("%c",h.top());
					h.pop();
				}
				//printf("popping %d )\n",i);
				h.pop();
			}
			else
			{
				while(!(h.empty() || m[h.top()]<m[expr[i]]))
				{
					printf("%c",h.top());
					h.pop();
				}
				//printf("pushing %c %d\n",expr[i],i);
				h.push(expr[i]);
			}
			
		}
		while(!h.empty())
		{
			printf("%c",h.top());
			h.pop();
		}
		printf("\n");
		expr.clear();
	}
	return 0;
}
