#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int m;
	float a;
	int flag=0;
	int id[1000];
	float b[1000];
	cin>>m>>a;
for(int i=0;i<m;i++)
{
	cin>>id[i]>>b[i];
}
for(int x=0;x<m-1;x++)
{
	for(int y=1;y<m-x;y++)
	{
		if(b[y-1]>b[y])
		{
	float temp1=b[y];
	      b[y]=b[y-1];
          b[y-1]=temp1;
    int temp2=id[y];
      id[y]=id[y-1];
      id[y-1]=temp2;
		}
	}
}
for(int j=m-1;j>=0;j--)
{
if(b[j]>=a)
{
cout<<setfill('0');
cout<<setw(3)<<id[j]<<" ";
flag++;
cout<<fixed<<setprecision(1)<<b[j]<<endl;
}

}
if(flag==0)
{
cout<<"None."<<endl;
}
return 0;
}