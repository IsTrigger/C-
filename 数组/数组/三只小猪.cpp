#include<iostream>
using namespace std;

int main() {
	cout << "��������ֻС������أ�" << endl;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	int max = 0;
	for (int i = 0 ; i < 5; i++) {
		if (max <= arr[i]) {
			max = arr[i];
		}
		
	}
	cout << "���ص�С�������Ϊ��" << max;
	return 0;
}