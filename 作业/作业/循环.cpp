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
	cout << "50到100的整数相加和为：" << b;
	cout << a;
}