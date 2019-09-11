#include <iostream>
#include <vector>
#include <map>

using namespace std;

int arr[3]{1,2,3};

vector<int> iv{1,2,3};
map<int, string> mp{{1,"a"},{2,"b"}};
string str{"Hello World"};
int *p=new int[20]{1,2,3};

struct A {
	int i,j;
	A(int m, int n):i(m),j(n){}
};

class B {
public:
	int m = 1234;
	int n;
};

A func(int m, int n){return {m,n};}

int main() {
	std::cout << "Hello, World!" << std::endl;

	A *pa = new A{3,7};

	B b;

	cout << b.m << endl;

	return 0;
}