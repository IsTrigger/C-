#include<iostream>
using namespace std;

int main() {
	cout << "请输入五个数：" << endl;
	int arr[5];
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	int num = 0;
	int arr1[5];
	for (int j = 4; j >= 0; j--) {
		arr1[num] = arr[j];
		num++;

	}

	for (int j = 0; j < 5; j++) {
		cout << arr1[j];
	}

}