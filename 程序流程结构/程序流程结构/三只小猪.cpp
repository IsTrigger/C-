#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "��ֱ�������ֻС������أ�" << endl;
	cin >> a >> b >> c;
	cout << "aС�������Ϊ��" << a << endl;
	cout << "bС�������Ϊ��" << b << endl;
	cout << "cС�������Ϊ��" << c << endl;
	if (a > b && a > c) {
		
		cout << "aС������" <<endl;
	
	}
	else if (b > a && b > c) {
		cout << "bС������" << endl;

	}
	else if (c > a && c > b) {
		cout << "cС������" << endl;

	}
	else {
		if (a == b && a != c) {
			cout << "a��b��ֻС������" << endl;
		}
		else if (b == c && b != a) {
			cout << "b��c��ֻС������" << endl;

		}
		else {
			cout << "��ֻС��һ����" << endl;
		}
	}
}