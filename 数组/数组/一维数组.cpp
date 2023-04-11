#include<iostream>
using namespace std;
int main() {
//第一种定义方式
	int arr[10];
	arr[0] = 1;
	arr[1] = 2;
	arr[2] = 3;
	arr[3] = 4;
	cout << arr[3];
//第二种定义方式
	int arr2[10] = { 1, 2, 3, 4 };
	cout << arr2[5];
//第三种定义方式
	int arr3[] = { 1, 2, 3, 4, 5, 6 };
	cout << arr3[5] <<endl;
//数组名的用法
//1.统计数组在内存中的长度
	int arr4[5] = { 1,2,3,4,5 };
	cout << sizeof(arr4[0]) << endl;
	cout <<sizeof(arr4[1]) << endl;
	cout <<sizeof(arr4) << endl;

//2.获取数组在内存中的首地址
	cout << &arr[0] << endl;
	cout << &arr[1] << endl;
	cout << &arr;
}