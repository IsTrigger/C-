#include<iostream>
using namespace std;

int main() {
	int i = 0;
	for (; i < 10; i++) {
		if (i == 5) {
			break;
		}
		else {
			cout << i;
		}
	}
}


int main() {
		int i = 0;
		for (; i < 10; i++) {
			if (i == 5) {
				continue;
			}
			else {
				cout << i;
			}
		}
}