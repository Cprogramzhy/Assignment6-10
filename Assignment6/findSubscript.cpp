#include <iostream>
using namespace std;
int main()
{
	int x=0,count1=1,count2=0;
	int n;
	cin>>n;
	int a[100];
	for(int i=0;i<n;i++)
	{cin>>a[i];}
	char find = 'N';
	for(int j=0;j<n;j++)
	{
		 if (j== a[j]) 
		 {  
            find = 'Y';  
            cout << j << endl;  
            break;  
        }  
    }  
    if (find == 'N')  
        cout << find<<endl;  
    return 0;  
}

