#include<iostream>  
using namespace std;  
char children[101];  
int boy = 0;//记录男生的数目  
int couple = 0;//记录狗男女的数目  
char m, f;//男，女  
int date() {//函数名叫yue pao 。。。  
    for (int i = 0; i < 2 * boy; i++) {  
        bool stay = true;  
        if (children[i] == m) {  
            for (int j = i + 1; j < 2 * boy; j++) {  
                if (children[j] == m)  
                    break;//不考虑男同问题，所以这里break，先让后面的继续  
                if (children[j] == f) {  
                    children[i] = ' ';  
                    children[j] = ' ';  
                    cout << i <<' '<< j << endl;  
                    couple++;  
                    stay = false;//约到了，就不用在这浪费时间了，所以把位子清空，可以嘿嘿嘿去了。。。。  
                    break;  
                }  
            }  
        }  
        if (stay == false)  
            break;//有人约到就跳出这层循环  
    }  
    if (couple != boy)//因为只考虑异性恋，所以如果情侣数目跟男生数目不相等，就证明还有男的是单身狗，所以继续递归  
        date();  
        return 0;  
}  
int main(){  
    cin.getline(children, 101);  
    m = children[0];//根据题意，无论第一个人长什么样，我们都把他当男的看  
    for (int i = 0; i < 100; i++) {  
        if (children[i] != m) {  
            f = children[i];//不考虑有第三种性别的存在，所以长得跟男的不一样的，一律视为女的  
            break;  
        }  
    }  
    for (int K = 0; K < 100; K++) {  
        if (children[K] == m)  
            boy++;//数数有多少个男生  
    }  
    date();  
    return 0;  
}  