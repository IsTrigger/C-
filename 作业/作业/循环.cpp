#include<iostream>
using namespace std;

void xunhuan() {
	int i = 50;
	int b = 0;
	while (i <= 100) {
		b += i;
		++i;
	}
	int a = 75 * 51;
	cout << "50��100��������Ӻ�Ϊ��" << b;
	cout << a;
}