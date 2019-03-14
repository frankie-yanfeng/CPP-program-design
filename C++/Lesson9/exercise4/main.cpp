#include <iostream>
using namespace std;
// 在此处补充你的代码

class CType{
public:
	void setvalue(int m)
	{
		n = m;
	}

	int operator++(int q){return n;}

	friend ostream & operator<<(ostream & os, const CType& p)
	{
		os << p.n * p.n;
		return os;
	}
private:
	int n;
};

int main(int argc, char* argv[]) {
	CType obj;
	int n;
	cin>>n;
	while ( n ) {
		obj.setvalue(n);
		cout << obj++ << " " << obj << endl;
		cin>>n;
	}
	return 0;
}