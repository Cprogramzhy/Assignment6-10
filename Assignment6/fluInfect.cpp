#include<iostream>  
using namespace std;  
int main() {  
    char room[101][101];  
    int n;  
    cin >> n;  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            cin >> room[i][j];  
        }  
    }  
    int m;  
    cin >> m;  
    for (int k = 0; k < m-1; k++) {  
        for (int i = 0; i < n; i++) {  
            for (int j = 0; j < n; j++) {  
                if (room[i][j] == '@') {  
                    if (i != 0 && room[i - 1][j] != '#' && room[i - 1][j] != '@')//�߽粻�������㣬�ϸ����������������  
                        room[i - 1][j] = '$';//������$��Ǵ���Ⱦ����Ϊ����һ��֮����ܹ����д�Ⱦ�������Ӱ�������������´���  
                    if (j != 0 && room[i][j - 1] != '#'&& room[i][j-1] != '@')  
                        room[i][j - 1] = '$';  
                    if (j != (n-1) && room[i][j + 1] != '#'&& room[i][j+1] != '@')  
                        room[i][j + 1] = '$';  
                    if (i != (n-1) && room[i + 1][j] != '#'&& room[i + 1][j] != '@')  
                        room[i + 1][j] = '$';  
                }  
            }         
            }  
        for (int i = 0; i < n; i++) {//��������֮�󣬽��д�Ⱦ  
            for (int j = 0; j < n; j++) {  
                if (room[i][j] == '$')  
                    room[i][j] = '@';  
            }  
        }//Ȼ��һ�����������������һ����  
    }  
    int count = 0;//Ȼ��ʼ����  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            if (room[i][j] == '@')  
                count++;  
        }  
    }  
    cout << count << endl;  
    return 0;  
}