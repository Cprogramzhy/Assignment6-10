#include<iostream>  
using namespace std;  
char children[101];  
int boy = 0;//��¼��������Ŀ  
int couple = 0;//��¼����Ů����Ŀ  
char m, f;//�У�Ů  
int date() {//��������yue pao ������  
    for (int i = 0; i < 2 * boy; i++) {  
        bool stay = true;  
        if (children[i] == m) {  
            for (int j = i + 1; j < 2 * boy; j++) {  
                if (children[j] == m)  
                    break;//��������ͬ���⣬��������break�����ú���ļ���  
                if (children[j] == f) {  
                    children[i] = ' ';  
                    children[j] = ' ';  
                    cout << i <<' '<< j << endl;  
                    couple++;  
                    stay = false;//Լ���ˣ��Ͳ��������˷�ʱ���ˣ����԰�λ����գ����Ժٺٺ�ȥ�ˡ�������  
                    break;  
                }  
            }  
        }  
        if (stay == false)  
            break;//����Լ�����������ѭ��  
    }  
    if (couple != boy)//��Ϊֻ�������������������������Ŀ��������Ŀ����ȣ���֤�������е��ǵ��������Լ����ݹ�  
        date();  
        return 0;  
}  
int main(){  
    cin.getline(children, 101);  
    m = children[0];//�������⣬���۵�һ���˳�ʲô�������Ƕ��������еĿ�  
    for (int i = 0; i < 100; i++) {  
        if (children[i] != m) {  
            f = children[i];//�������е������Ա�Ĵ��ڣ����Գ��ø��еĲ�һ���ģ�һ����ΪŮ��  
            break;  
        }  
    }  
    for (int K = 0; K < 100; K++) {  
        if (children[K] == m)  
            boy++;//�����ж��ٸ�����  
    }  
    date();  
    return 0;  
}  