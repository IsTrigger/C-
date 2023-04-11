#include< iostream>
using namespace std;

int main() {
	//整型 short 2  int 4  long 4  long long 16
	short a = 1;
	int b = 1;
	long c = 1;
	long long d = 1;

	cout << "短整型的大小为：" << sizeof(a) << endl;
	cout << "整型的大小为：" << sizeof(b) << endl;
	cout << "长整型的大小为：" << sizeof(c) << endl;
	cout << "长长整型的大小为：" << sizeof(d) << endl;
	cout << "***************************************" << endl;
	//最多显示小数点后6位
	float f1 = 3.1415926f;
	double f2 = 3.1415926;
	double f3 = 3e-10;
	cout << "f1=" << f1 << endl;
	cout << "f2=" << f2 << endl;
	cout << "f3=" << f3 << endl;

	cout << (int)'a';

	char str[] = "a";
	cout << str;
	string str1 = "a";
	cout << str1;
	


	bool flag = true;
	cout << "请给flag赋值：" << endl;
	cin >> flag;
	cout << "修改后的flag：" << flag << endl;
	system("pause");

}