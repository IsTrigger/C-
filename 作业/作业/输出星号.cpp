#include<iostream>
using namespace std;

int n;
int main() {
	cout << "请输入一个数：";
	cin  >> n;
	//for (int i = 0; i <= n; ++i) {
	//	cout << i * '*' << endl;
	//}

	string a;
	int i;
	int j;
	for (j = n/2; j >=0; --j) {
		a = a + ' ';
		for (i = 0; i <= n; ++i) {

			cout << a << endl;
			a = a + '*';
	}
	}
	


}