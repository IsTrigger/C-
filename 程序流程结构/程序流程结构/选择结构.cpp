#include<iostream>
using namespace std;

int main() {
 //if ���
	float i;
	cout << "���������ķ�����" << endl;

	cin >> i;
	if (i >= 325) {
		cout << "��ϲ��ͨ�����ԣ�";
	}
	else{
		cout << "���ź�����û��ͨ�����ԣ�";
	}
	

}

int main() {
//switch���
	int num = 0;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "������";
	default:
		cout << "������";
	}
//��Ŀ�����
	int c;
	c = 1 > 2 ? 4 : 5;
	cout << c;
}

