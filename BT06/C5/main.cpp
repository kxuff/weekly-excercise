#include<bits/stdc++.h>
using namespace std;

int n;
int Check(int x){
    for (int i = 2; i * i <= n; i++){
        if ( x % i == 0) return 0;
    }
    return x > 1;
}
int main(){
    cin >> n;
    for (int i = 2; i <= n; i++){
        if (Check(i)) cout << i << " "; 
    }
    return 0;
}