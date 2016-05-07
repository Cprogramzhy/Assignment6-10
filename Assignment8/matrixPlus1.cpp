#include <iostream>
using namespace std;
int add()
{
	int m,n;
	int sum=0;
	cin>>m>>n;
	int a[100][100];
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
		cin>>a[i][j];
		}
	}

    for(int k=0;k<m;k++)
	{
		for(int l=0;l<n;l++)
		{
			if(k==0||l==0||k==m-1||l==n-1)
	         sum  =sum+(*(&a[k][l]));
		}
	}
	cout<<sum<<endl;
	return 0;
}
int main()
{
	int x;
	cin>>x;
	for(int h=0;h<x;h++)
	{
		add();system("pause");
	}
	return 0;
}