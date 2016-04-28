#include<iostream>
using namespace std;
int conjec(int m)
{
	if (m == 1) 
	{	
	cout << "End"<<endl;
	return 0;	
	}
	else 
	{	
		if (m % 2 == 0) 
		{		
			cout << m << "/2=" << m/ 2 << endl;	
			m = m / 2;		
			conjec(m);		
			return 0;	
		}		
		if (m % 2 == 1) 
		{		
			cout << m<< "*3+1=" << m* 3 + 1 << endl;
			m = m * 3 + 1;		
		    conjec(m);		
			return 0;		
		}
	}
}
int main()
 {
	int m;
	cin >> m;	
conjec(m);
	return 0;
}

	

	
