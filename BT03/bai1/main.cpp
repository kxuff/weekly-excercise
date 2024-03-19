// code by kxuff
// mu no.1 :))

#include <bits/stdc++.h>
#define mp make_pair
#define fi first
#define se second
#define PB push_back
#define pii pair <int,int>
#define ll long long
#define FOR(i, a, b) for(int i = a ; i <= b ; i++)
#define ReFOR(i, a, b) for(int i = a ; i >= b ; i--)
#define MASK(x)  (1ll << (x))
#define getbit(x,k) ((x>>k)&1)
#define BITOFF(x,k) ((x) & ~(1ll << (k)))
#define BITON(x,k)  ((1ll << (k)) | (x))
#define CNT(k) __builtin_popcount(k)
#define task "kx"
using namespace std;

ll const N = 1007;
ll const base = 1e9 + 7;

struct Point{
    int x;
    int y;

    void print(Point p){
        cout <<  p.x << " " << p.y << '\n';
    }

    Point mid_point(const Point& p1, const Point& p2) {
        Point mid;
        mid.x = (p1.x + p2.x) / 2;
        mid.y = (p1.y + p2.y) / 2;
        return mid;
    }
};

void tmp( Point p){
    cout << &p << endl;
}

void tmp1( Point& p){
    cout << &p << endl;
}

struct Rect{
    int x, y, w, h;
    bool contains( const Point& p) const {
        return (p.x >= x && p.x <= x+w && p.y >= y && p.y <= y + h);
    }
};

struct Ship{
    Rect pos;
    string id;
    int dx, dy;
    Ship( Rect _pos, string _id, int _dx, int _dy){
        pos = _pos;
        id = _id;
        dx = _dx;
        dy = _dy;
    }
    void move(){
        pos.x += dx;
        pos.y += dy;
    }
};

void display(const Ship& ship){
    cout << ship.id << " " << ship.pos. x << " " << ship.pos.y << endl;
}

struct String{
    int n;
    char* str;

    String(const char* s){
        n = strlen(s);
        str = new char[n+1];
        strcpy(str,s);
    }

    ~String(){
        delete[] str;
    }

    void print(){
        cout << str << endl;
    }

    void append(const char* s){
        int len = strlen(s);
        char* tmp = new char[n+len+1];
        strcpy(tmp,str);
        strcat(tmp, s);
        str = tmp; 
        n += len;
    }
};

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    String greeting("Hi");
    greeting.append(" there");
    greeting.print();
}