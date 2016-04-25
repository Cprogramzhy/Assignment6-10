#include<iostream>  
#include<iomanip>  
using namespace std;  
int main() {  
    float countA = 0.00;  
    float countB = 0.00;  
    float countC = 0.00;  
    float count1 = 0.00;  
    float count2 = 0.00;  
    float count3 = 0.00;  
    for (int i = 0; i < 3; i++) {  
        int ID;  
        cin >> ID;  
        int n;  
        cin >> n;  
        for (int j = 0; j < n;j++){  
            char kind;  
            float money;  
            cin >> kind >> money;  
            if(kind=='A')  
                countA +=money;  
            if (kind == 'B')  
                countB += money;  
            if (kind == 'C')  
                countC += money;  
            if (ID == 1)  
                count1 += money;  
            if (ID == 2)  
                count2 += money;  
            if (ID ==3)  
                count3 += money;  
        }  
    }  
    cout << "1 " <<fixed<<setprecision(2) << count1<<endl; 
    cout << "2 " << fixed<<setprecision(2) << count2<<endl;  
    cout << "3 " << fixed<<setprecision(2) << count3 << endl;  
    cout << "A " << fixed<<setprecision(2) << countA << endl;  
    cout << "B " << fixed<<setprecision(2) << countB << endl;  
    cout << "C " << fixed<<setprecision(2) << countC << endl;  
    return 0;  
}