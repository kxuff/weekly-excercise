#include<bits/stdc++.h>
using namespace std;
int m, n, k;
int main(){
    srand(time(0));
    cin >> m >> n >> k;
    char a[m + 5][n + 5];
    char type[2] = {'.', 'x'};
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if ( k > 0){
                a[i][j] = type[rand()%2];
                if (a[i][j] == 'x') k--;
            }
            else a[i][j] = '.';
        }
    }
    int cnt = 0;
    while(cnt < m*n){
        int x, y; 
        cin >> x >> y; 
        cnt++;
        if (a[x][y] == 'x'){
            cout << "YOU'RE DEAD!" << '\n';
            for (int i = 0; i < m; i++){
                for (int j = 0; j < n; j++){
                    cout << a[i][j] << " ";
                }
                cout << '\n';
            }
            return 0;
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                if ( i == x && j == y){
                    int cnt1;
                    for (int newx = -1; newx <= 1; newx++){
                        for (int newy = -1; newy <=1; newy++){
                            int _x = i + newx;
                            int _y = j + newy;
                            if (newx == 0 && newy == 0) continue;
                            if ( a[_x][_y] == 'x' && _x >= 0 && _x < m && _y >= 0 && _y < n) 
                            	cnt1++;
                        }
                    }
                    a[x][y] = (char)(cnt1+48 + '0');
                    cout << a[x][y] << " ";
                }
                else if ( a[i][j] != '.' && a[i][j] != 'x') cout << a[i][j] << " ";
                else cout << "* ";
            }
            cout << '\n';
        }
    }
}