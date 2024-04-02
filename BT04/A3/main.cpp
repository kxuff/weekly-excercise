#include<iostream>
#include<string.h>

using namespace std;
char dayTab1[2][12] = {
  {31,28,31,30,31,30,31,31,30,31,30,31},
  {31,29,31,30,31,30,31,31,30,31,30,31}
};  
int main(){ 
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 12; j++){
            cout << (char)dayTab1[i][j] << " ";
        }
        cout << '\n';\
    }
}