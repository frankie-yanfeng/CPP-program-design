#include <iostream>
using namespace std;
//对象作为函数的参数时，生成该参数需要调用复制构
//造函数，效率比较低。用指针作参数，代码又不好看，
//如何解决？

class Sample {
	int value;
public:
	Sample(int n):value(n){}
	int getValue(){return value;}
};

void PrintfObj(const Sample & o)
{
	Sample l = o;
	cout << l.getValue() << endl;
}

int main() {
	//std::cout << "Hello, World!" << std::endl;

	Sample t(7);

	PrintfObj(t);

	return 0;
}