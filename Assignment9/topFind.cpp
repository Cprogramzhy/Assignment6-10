#include<iostream>
using namespace std;
int main()
{
    int m,n;
    int a[22][22]={0};
    cin>>m>>n;
    for(int i=1;i<m+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            cin>>a[i][j];
        }
    }
    for(int x=1;x<m+1;x++)
    {
        for(int y=1;y<n+1;y++)
        {
            if (((a[x-1][y]<=a[x][y]))&&((a[x+1][y]<=a[x][y]))&&((a[x][y+1]<=a[x][y]))&&((a[x][y-1]<=a[x][y])))
                cout<<x-1<<" "<<y-1<<endl;
        }
    }
    return 0;
}