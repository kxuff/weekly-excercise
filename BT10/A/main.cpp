#include <bits/stdc++.h>
using namespace std;

//A1
char* concat(const char* str1, const char* str2) {
  	int len1 = strlen(str1);
  	int len2 = strlen(str2);
	int totalLen = len1 + len2 + 1;
	char* ans = new char[totalLen];
	strcpy(ans, str1);
	strcat(ans, str2);
	return ans;
}
void A2() {
	int* p = new int;
	int* p2 = p;
	*p = 10;
	delete p; 
	*p2 = 100;//lỗi truy cập vùng nhớ đã giải phóng
	cout << *p2;
	delete p2;//xóa con trỏ 2 lần

}
void A3() {
	char* a = new char[10];
	char* c = a + 3;
	for (int i = 0; i < 9; i++) a[i] = 'a'; 
	a[9] = '\0';
	cerr <<"a: " << "-" << a << "-" << endl;
	cerr <<"c: " << "-" << c << "-" << endl;
	delete c;
	cerr << "a after deleting c:" << "-" << a << "-" << endl; // lệnh cerr này không chạy như mong muốn vì việc giải phóng c không giải phóng bộ nhớ của mảng a, dẫn đến rò rỉ bộ nhớ nên việc truy cập và in giá trị của a sau khi giải phóng c là không xác định và có thể dẫn đến lỗi


}
void testA4() {
	int* tmp = new int;
	*tmp = 1;
	delete tmp;
	*tmp = 2;
	cout << *tmp;
	//lỗi xảy ra khi chương trình tiếp tục sử dụng con trỏ tmp sau khi đã giải phóng. 
	//Việc truy cập hoặc sửa đổi vùng nhớ đã được giải phóng có thể dẫn đến hành vi không xác định
}
int main() {
	
}
