#include <iostream>
#include <set>

using namespace std;

template <class T>
void Print(T first, T last)
{
	for(;first!=last;++first)
		cout << * first << " ";
}

class A{
public:
	A(int n_):value(n_){}

	friend ostream & operator<<(ostream & o, const A & a2)
	{
		o << a2.value;
		return o;
	}

	friend bool operator<(const A & a1, const A& a2)
	{
		return a1.value < a2.value;
	}

	friend class MyLess;

private:
	int value;
};

struct MyLess{
	bool operator()(const A&a1, const A &a2)
	{
		return (a1.value%10) < (a2.value%10);
	}
};

typedef multiset<A> MSET1;
typedef multiset<A, MyLess> MSET2;

int main() {
	//std::cout << "Hello, World!" << std::endl;

	//std::multiset<A>a;
	//-> multiset<A, less<A> > a; 要求A的对象能用<比较，即适当重载了<
	//a.insert(A(5));

	const int SIZE = 6;
	A a[SIZE] = {4,22,19,8,33,40};
	MSET1 m1;
	m1.insert(a,a+SIZE);
	m1.insert(22);

	cout << "1)" << m1.count(22) << endl;
	cout << "2>";
	Print(m1.begin(),m1.end());


	return 0;
}