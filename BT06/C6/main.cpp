#include<bits/stdc++.h>
using namespace std;

int a, b;
int find_gcd(int a, int b){
    while ( a != b){
        if ( a > b) a -= b;
        else b -= a;
    }
    return a;
}
int main(){
    cin >> a >> b;
    if (find_gcd(a,b) == 1) cout <<"Yes";
    else cout << "False";
}