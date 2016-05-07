#include <iostream>
using namespace std;
int main()
{
	int row,col,k=0;
	int*p;
	int array[100][100];
	cin>>row>>col;
	for(int i=0;i<row;i++)
	{
		for(int j=0;j<col;j++)
		{
			cin>>array[i][j];
		}
	}
	
while(k<row+col-1)
{
for(int x=0;x<row;x++)
	{
for(int y=0;y<col;y++)
		{
if((x+y)==k)
		{
	cout<<array[x][y]<<endl;
		}
		}
	}
k++;
}
return 0;
}
	
