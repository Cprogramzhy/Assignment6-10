#include <iostream>
using namespace std;
int main()
{
int a,b,c,d;
for(a=1; a<=4; a++) 
{  
	 for(b=1; b<=4; b++)
	 {
               for(c=1; c<=4; c++) 
			   {
                 for(d=1; d<=4; d++) 
				 {              
                      if((a!=b&&a!=c&&a!=d&&b!=c&&b!=d&&c!=d) 
                           &&((a==3)+(b==1)+(c==2)+(d==4)==1)
                           &&((a==2)+(b==4)+(c==3)+(d==1)==1)
                           &&((b==3)+(d==4)==1)
                           &&((a==1)+(b==3)+(c==4)+(d==2)==1)
                           &&((a+b+c+d)==10)) 
					  {
                        cout << a << endl << b << endl << c << endl << d<< endl;
                         return 0; 
                     }           
                 }
                }
           }
      }
     return 0;    
 }
