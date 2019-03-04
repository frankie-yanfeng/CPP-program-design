#include <iostream>

using namespace std;

class A {
public :
virtual void Print( )
{ cout << "A::Print"<<endl ; }
};
class B: public A {
public :
virtual void Print( ) { cout << "B::Print" <<endl; }
};
class D: public A {
public:
virtual void Print( ) { cout << "D::Print" << endl ; }
};
class E: public B {
virtual void Print( ) { cout << "E::Print" << endl ; }
};

int main() {
	A a; B b; E e; D d;
	A * pa = &a; B * pb = &b;
	D * pd = &d ; E * pe = &e;
	pa->Print(); // a.Print()被调用，输出：A::Print
	pa = pb;
	pa -> Print(); //b.Print()被调用，输出：B::Print
	pa = pd;
	pa -> Print(); //d. Print ()被调用,输出：D::Print
	pa = pe;
	pa -> Print(); //e.Print () 被调用,输出：E::Print
	return 0;
}