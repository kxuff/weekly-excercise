#include<bits/stdc++.h>

using namespace std;
int const N = 20;
int a[N];
int main(){
    srand(time(nullptr));
    for (int i = 0; i < N; i++){
        a[i] = rand() % 100 + 1;
    }
    for (int i = 0; i < N; i++) 
        cout << a[i] << " ";
    cout << '\n';
    for (int i = 0; i < N - 1; i++){
        for ( int j = 0; j < N - i - 1; j++){
            if (a[j] > a[j+1]) swap(a[j], a[j+1]);
        }
    }
    for (int i = 0; i < N; i++) 
        cout << a[i] << " ";
}