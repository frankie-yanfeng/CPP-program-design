#include <iostream>

using namespace std;

class CSample {
	int x;
public:
	CSample() {
		cout << "Constructor 1 Called" << endl;
	}
	CSample(int n) {
		x = n;
		cout << "Constructor 2 Called" << endl;
	}
};

class Test {
public:
	Test( int n) { } //(1)
	Test( int n, int m) { } //(2)
	Test() { } //(3)
};


int main(){
	CSample array1[2];
	cout << "step1"<<endl;
	CSample array2[2] = {4,5};
	cout << "step2"<<endl;
	CSample array3[2] = {3};
	cout << "step3"<<endl;
	CSample * array4 =
			new CSample[2];
	delete []array4;



	Test arrayA[3] = { 1, Test(1,2) };
// 三个元素分别用(1),(2),(3)初始化
	Test arrayB[3] = { Test(2,3), Test(1,2) , 1};
// 三个元素分别用(2),(2),(1)初始化
	Test * pArray[3] = { new Test(4), new Test(1,2) };
//两个元素分别用(1),(2) 初始化

	return 0;
}