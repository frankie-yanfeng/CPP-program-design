#include <iostream>
using namespace std;
class Sample{
public:
    int v;
    Sample(int n):v(n) { }
// 在此处补充你的代码
	Sample(Sample & a){this->v=2*a.v;}
};

int main() {
    Sample a(5);
    Sample b = a;
    cout << b.v;
    return 0;
}