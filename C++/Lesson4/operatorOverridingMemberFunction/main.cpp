#include <iostream>

using namespace std;

class Complex {
	public:
		Complex( double r= 0.0, double m = 0.0 ):real(r), imaginary(m) { } // constructor
		Complex operator+ ( const Complex & ); // addition
		Complex operator- ( const Complex & ); // subtraction
		void getValue(){	cout << "real:" << this->real << " imaginary:" << this->imaginary << endl;}
	private:
		double real; // real part
		double imaginary; // imaginary part
};

// Overloaded addition operator
Complex Complex::operator+(const Complex & operand2) {
	return Complex( real + operand2.real,imaginary + operand2.imaginary );
}
// Overloaded subtraction operator
Complex Complex::operator- (const Complex & operand2){
	return Complex( real - operand2.real,imaginary - operand2.imaginary );
}

int main(){
	Complex x, y(4.3, 8.2), z(3.3, 1.1), m;
 	x = y + z;
	x.getValue();

 	x = y - z;
	x.getValue();

	m = x.operator+(z);
	m.getValue();

	m = x.operator-(z);
	m.getValue();

 	return 0;
}
