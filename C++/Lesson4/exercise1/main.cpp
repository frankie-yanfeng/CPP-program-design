#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std;
class Complex {
private:
    double r,i;
public:
    void Print() {
        cout << r << "+" << i << "i" << endl;
    }
    // 在此处补充你的代码
    Complex & operator=(const string s)
    {
    	string delimiter = "+";


    	this->r=stof(s.substr(0,s.find(delimiter)));

    	this->i=stof(s.substr(s.find(delimiter), s.length()-1));

    	return *this;

    }
};
int main() {
    Complex a;
    a = "3+4i"; a.Print();
    a = "5+6i"; a.Print();
    return 0;
}