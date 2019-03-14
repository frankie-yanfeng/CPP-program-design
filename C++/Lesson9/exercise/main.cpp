#include<iostream>
using namespace std;
class Number {
public:
	int num;
	Number(int n=0): num(n) {}

	Number& operator*(const Number &c)
	{
		Number *m = new Number(num * c.num);
		return *m;
	}

	operator int() const
	{
		return int(num);
	}

// 在此处补充你的代码
};

int main() {
	Number n1(10), n2(20);
	Number n3;n3 = n1*n2;
	cout << int(n3) << endl;
	return 0;
}