#include <bits/stdc++.h>

using namespace std;
int n, a[100007];
void printRow(int m, int n) {
    for(int j = 1; j <= m/2; j++) cout << " ";
    for(int j = m/2  + 1; j <= m/2 + n - 1; j++) cout << "*";
    for(int j =  m/2 + n; j <= m/2 + n + m/2 - 1; j++) cout << " ";
    cout << '\n';
}
int main() {
    cin >> n;
    int len = 1;
    for(int i = 1; i <= n; i++) {
        printRow(n * 2 - len, i * 2);
        len += 2;
    }
}