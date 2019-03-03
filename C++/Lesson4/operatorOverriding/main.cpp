#include <iostream>

using namespace std;

class Complex {
	public:
		Complex( double r = 0.0, double i= 0.0 ){
	 		real = r;
	 		imaginary = i;
		}
	double real; // real part
	double imaginary; // imaginary part
};

Complex operator+ (const Complex & a, const Complex & b)
{
	return Complex( a.real+b.real, a.imaginary+b.imaginary);
} // “类名(参数表)” 就代表一个对象

//Complex a(1,2), b(2,3), c;

int main() {
	//std::cout << "Hello, World!" << std::endl;

	Complex a(1,2), b(2,3), c,d ;
	c = a+b;
	cout << "real:" << c.real << " imaginary:" << c.imaginary << endl;
	d=operator+(a,c);
	cout << "real:" << d.real << " imaginary:" << d.imaginary << endl;

	return 0;
}