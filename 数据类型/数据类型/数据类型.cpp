#include< iostream>
using namespace std;

int main() {
	//���� short 2  int 4  long 4  long long 16
	short a = 1;
	int b = 1;
	long c = 1;
	long long d = 1;

	cout << "�����͵Ĵ�СΪ��" << sizeof(a) << endl;
	cout << "���͵Ĵ�СΪ��" << sizeof(b) << endl;
	cout << "�����͵Ĵ�СΪ��" << sizeof(c) << endl;
	cout << "�������͵Ĵ�СΪ��" << sizeof(d) << endl;
	cout << "***************************************" << endl;
	//�����ʾС�����6λ
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
	cout << "���flag��ֵ��" << endl;
	cin >> flag;
	cout << "�޸ĺ��flag��" << flag << endl;
	system("pause");

}