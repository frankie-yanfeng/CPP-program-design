#include <iostream>

using namespace std;

template <class T>
class A{
public:
	template <class T2>
	void Func(T2 t){cout << t;}
};

template <class T, int size>
class CArray{
	T array[size];
public:
	void Print()
	{
		for(int i=0; i< size; ++i)
			cout << array[i] << endl;
	}
};

int main() {
	std::cout << "Hello, World!" << std::endl;

	A<int> a;
	a.Func('K');
	return 0;
}