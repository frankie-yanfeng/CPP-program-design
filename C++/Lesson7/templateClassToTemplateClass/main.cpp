#include <iostream>

using namespace std;

template <class T1, class T2>
class A{T1 v1; T2 v2;};

template <class T>
class B:public A<int,double>{
	T v;
};

int main() {
	std::cout << "Hello, World!" << std::endl;

	B<char> obj1;

	return 0;
}