#include<iostream>
using namespace std;

int main() {
	cout << "请输入五只小猪的体重：" << endl;
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
	cout << "最重的小猪的重量为：" << max;
	return 0;
}