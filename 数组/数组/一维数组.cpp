#include<iostream>
using namespace std;
int main() {
//��һ�ֶ��巽ʽ
	int arr[10];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	cout << arr[3];
//�ڶ��ֶ��巽ʽ
	int arr2[10] = { 1, 2, 3, 4 };
	cout << arr2[5];
//�����ֶ��巽ʽ
	int arr3[] = { 1, 2, 3, 4, 5, 6 };
	cout << arr3[5] <<endl;
//���������÷�
//1.ͳ���������ڴ��еĳ���
	int arr4[5] = { 1,2,3,4,5 };
	cout << sizeof(arr4[0]) << endl;
	cout <<sizeof(arr4[1]) << endl;
	cout <<sizeof(arr4) << endl;

//2.��ȡ�������ڴ��е��׵�ַ
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr;
}