#include <iostream>

using namespace std;

class CMyAverage { //函数对象类
public:
	double operator() ( int a1, int a2, int a3 ) {
		return (double)(a1 + a2+a3) / 3;
	}
};

int main()
{
	CMyAverage average; //函数对象
	cout << average(3,2,3) << endl; // average.operator()(3,2,3)

	std::cout << "Hello, World!" << std::endl;
	return 0;
}