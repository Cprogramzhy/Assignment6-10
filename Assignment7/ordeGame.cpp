#include<iostream>  
using namespace std;  
char children[101];  
int boy = 0; 
int couple = 0; 
char m, f;
int date()
 {  
    for (int i = 0; i < 2 * boy; i++) 
	{  
        bool stay = true;  
        if (children[i] == m)
		{  
            for (int j = i + 1; j < 2 * boy; j++)
			{  
                if (children[j] == m)  
                    break; 
                if (children[j] == f)
				{  
                    children[i] = ' ';  
                    children[j] = ' ';  
                    cout << i <<' '<< j << endl;  
                    couple++;  
                    stay = false; 
                    break;  
                }  
            }  
        }  
        if (stay == false)  
            break;
    }  
    if (couple != boy)
        date();  
        return 0;  
}  
int main()
{  
    cin.getline(children, 101);  
    m = children[0];
    for (int i = 0; i < 100; i++)
	{  
        if (children[i] != m) 
		{  
            f = children[i];
            break;  
        }  
    }  
    for (int K = 0; K < 100; K++)
	{  
        if (children[K] == m)  
            boy++;
    }  
    date();  
    return 0;  
}  