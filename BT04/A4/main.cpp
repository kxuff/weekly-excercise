#include<bits/stdc++.h>

using namespace std;

int main(){
    char a[1] = {2};
    for(int i = -1; i <= 2; i++) 
        if(i != 0) cout << a[i] << " ";

    a[-1] = 'a';
    a[1] = 'b';
    a[2] = 'c';
    cout << a[-1] << " " << a[1]  << " " << a[2] << '\n';

    char b[3][4] ;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++ ) {
            cin >> b[i][j];
        }
    }
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 6; j++) {
            cout << b[i][j] << " ";
        }
        cout << '\n';
    }
    return 0;
}