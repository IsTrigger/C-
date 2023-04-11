#include<iostream>
using namespace std;

int main() {
 //if 语句
	float i;
	cout << "请输入您的分数：" << endl;

	cin >> i;
	if (i >= 325) {
		cout << "恭喜您通过考试！";
	}
	else{
		cout << "很遗憾，您没有通过考试！";
	}
	

}

int main() {
//switch语句
	int num = 0;
	cin >> num;
	switch (num)
	{
	case 1:
		cout << "你是猪";
	default:
		cout << "我是猪";
	}
//三目运算符
	int c;
	c = 1 > 2 ? 4 : 5;
	cout << c;
}

