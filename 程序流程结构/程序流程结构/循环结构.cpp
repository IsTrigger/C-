#include<iostream>
using namespace std;



int W() {
	cout << "Whileѭ��" << endl;

	int i = 12;
	while (i > 10) {
		
		--i;
		cout << "*" << endl;
	}
	return 0;
}

int DW() {
	cout << "Do-Whileѭ��" << endl;
	int j = 12;
	do
	{
		--j;
		cout << "*" << endl;
	}
	while (j > 10);
	return 0;
}

int FOR() {
	cout << "forѭ��" << endl;
	for (int i = 0; i <= 10; i++) {
		cout << "* ";
	
	}
	return 0;
}

int main() {
	//W();
	//DW();
	FOR();
}
