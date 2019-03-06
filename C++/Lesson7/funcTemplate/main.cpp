#include <iostream>

//using namespace std;

void Swap(int &x, int &y)
{
	int tmp=x;
	x=y;
	y=tmp;
}

template<class T>
void swap(T &x, T &y)
{
	T tmp = x;
	x = y;
	y = tmp;
}

template<class T1, class T2>
T2 print(T1 arg1, T2 arg2)
{
	std::cout << arg1 << " " << arg2 << std::endl;

	return arg2;
}

template <class T>
T maxElement(T a[], int size)
{
	T tmpMax = a[0];
	for(int i=1; i < size; i++)
	{
		if (a[i] > tmpMax)
		{
			tmpMax = a[i];
		}
	}

	return tmpMax;
}

int main() {
	std::cout << "Hello, World!" << std::endl;

	int n=1,m=2;
	swap(n,m);

	double f=1.2,g=2.3;
	swap(f,g);

	print(n,f);

	return 0;
}