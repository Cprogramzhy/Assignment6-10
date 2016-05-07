#include<iostream>
#include<cstring>
using namespace std; 
int main()
{
	int  n=0;
	int	sum = 0;
    cin >> n;
    char a[41]={0};
    for (int i=0;i<n;i++)
    {
        cin>>a;
        if (sum+1+strlen(a)>80)
        {
            cout<<endl;               
            sum=0;        
        } 
        else if(i>0)
        {
            cout<<" ";
            sum++;  
        }
        cout<<a;
        sum += strlen(a);
    }
    return 0;
}