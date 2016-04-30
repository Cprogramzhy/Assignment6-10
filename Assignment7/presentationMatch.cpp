#include<iostream>
using namespace std;

void parenthesesMatching(char str[],int i)
{
	if(str[i]!='\0')
	{
		if(str[i]==')')
		{
			int j=i;
			while(str[--j]!='('&&j>0);
			if(str[j]=='(')
			{
				str[i]='*';
				str[j]='&';
			}
		}
		parenthesesMatching(str,++i);
	}
}

int main()
{
	char str[101];
	while(cin.getline(str,101))
	{
		int i=0,n=0;
		char a[101]={0};
		parenthesesMatching(str,i);
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]=='(')
				a[i]='$';
			else if(str[i]==')')
				a[i]='?';
			else
				a[i]=' ';
		}
		a[i+1]='\0';
		for(i=0;str[i]!='\0';i++)
		{
			if(str[i]=='&')
				str[i]='(';
			else if(str[i]=='*')
				str[i]=')';
		}
		cout<<str<<endl<<a<<endl;
	}
	return 0;
}