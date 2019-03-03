#include <iostream>

using namespace std;

void swapPointer( int * a, int * b)
{
	int tmp;
	tmp = * a; * a = * b; * b = tmp;
}

void swapReference( int& a, int& b)
{
	int tmp;
	tmp = a; a = b; b = tmp;
}

int main() {
	std::cout << "Hello, World!" << std::endl;

	int n1=5, n2=6;
	swapPointer(& n1,& n2) ; // n1,n2的值被交换
	cout << "n1:" << n1 << " n2:" << n2 << endl;

	int a = 9, b=10;
	swapReference(a,b);
	cout << "a:" << a << " b:" << b << endl;

	return 0;
}