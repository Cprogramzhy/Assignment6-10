#include<iostream>  
#include <iomanip>  
using namespace std;  
int main() {  
    int year, month, day;  
    char a, b;  
    cin >> year >> a >> month >> b >> day;  
        bool leap = false;//��������ж����֮꣬ǰ����Ŀд����������ﲻ��˵  
        bool special=false;//���������������Ƿ���£����꣬��Ϊ��ЩҪ���⴦��������ֻҪ������1�ͺ�  
        if (year % 4 == 0 & year % 100 != 0)  
            leap = true;  
        if (year % 400 == 0)  
            leap = true;  
        if (month == 2) {//�Զ��½��д���ע������  
            if (leap == true && day == 29) {  
                month++;  
                day = 1;  
                special = true;  
            }  
            if (leap == false && day == 28) {  
                month++;  
                day = 1;  
                special = true;  
            }  
        }  
        if ((month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) && (day == 31)) {//�Դ��½��д���   
            if (month == 12) {//����12�¿��꣬��������  
                month = 1;  
                day = 1;  
                year++;  
                special = true;  
            }  
            else {//�����Ŀ���  
                day = 1;  
                month++;  
                special = true;  
            }  
        }  
        if ((month == 4 || month == 6 || month == 9 || month == 11) && day == 30) {//Ȼ���С�½��д���  
            day = 1;  
            month++;  
            special = true;  
        }  
        if (special == false)//�Բ�����Ľ��д���  
            day++;  
        cout << year << '-' << setw(2)<<setfill('0') << month << '-' << setw(2) << setfill('0') << day << endl;//����setw�������������ȣ�setfill���������������ȡ�  
        return 0;  
    }