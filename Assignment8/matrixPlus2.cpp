#include<iostream>
using namespace std;
int main()
{
int k;
cin>>k;
while(k!=0)
{
int m,n;
cin>>m>>n;
int a[100][100];
for(int i=0;i<m;i++)
{
   for(int j=0;j<m;j++)
   {
     cin>>a[i][j];
   }
}
int *p;
int sum=0;
for(int x=0;x<m;x++)
{
   for(int y=0;y<n;y++)
   {
if(x==0||y==0||x==m-1||y==n-1)
	{
	cout<<x<<" "<<y<<" "<<a[x][y]<<endl;
p=&a[x][y];
sum=sum+(*p);
	}
   }
}
cout<<sum<<endl;
k--;
}
return 0;
}