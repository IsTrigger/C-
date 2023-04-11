#include<iostream>
using namespace std;

int main() {
	int a, b, c;
	cout << "请分别输入三只小猪的体重：" << endl;
	cin >> a >> b >> c;
	cout << "a小猪的重量为：" << a << endl;
	cout << "b小猪的重量为：" << b << endl;
	cout << "c小猪的重量为：" << c << endl;
	if (a > b && a > c) {
		
		cout << "a小猪最重" <<endl;
	
	}
	else if (b > a && b > c) {
		cout << "b小猪最重" << endl;

	}
	else if (c > a && c > b) {
		cout << "c小猪最重" << endl;

	}
	else {
		if (a == b && a != c) {
			cout << "a和b两只小猪最重" << endl;
		}
		else if (b == c && b != a) {
			cout << "b和c两只小猪最重" << endl;

		}
		else {
			cout << "三只小猪一样重" << endl;
		}
	}
}