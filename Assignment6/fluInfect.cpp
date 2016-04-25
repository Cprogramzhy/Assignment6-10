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
                    if (i != 0 && room[i - 1][j] != '#' && room[i - 1][j] != '@')//边界不进行运算，严格控制在输入区间内  
                        room[i - 1][j] = '$';//这里用$标记待传染，因为遍历一遍之后才能够进行传染，否则会影响遍历结果，导致错误  
                    if (j != 0 && room[i][j - 1] != '#'&& room[i][j-1] != '@')  
                        room[i][j - 1] = '$';  
                    if (j != (n-1) && room[i][j + 1] != '#'&& room[i][j+1] != '@')  
                        room[i][j + 1] = '$';  
                    if (i != (n-1) && room[i + 1][j] != '#'&& room[i + 1][j] != '@')  
                        room[i + 1][j] = '$';  
                }  
            }         
            }  
        for (int i = 0; i < n; i++) {//整个遍历之后，进行传染  
            for (int j = 0; j < n; j++) {  
                if (room[i][j] == '$')  
                    room[i][j] = '@';  
            }  
        }//然后一天结束，跟天黑请闭眼一样。  
    }  
    int count = 0;//然后开始数数  
    for (int i = 0; i < n; i++) {  
        for (int j = 0; j < n; j++) {  
            if (room[i][j] == '@')  
                count++;  
        }  
    }  
    cout << count << endl;  
    return 0;  
}