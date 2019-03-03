#include <iostream>

using namespace std;

class CRectangle
{
public:
	int w, h;
	void Init( int w_, int h_ ) {
		w = w_; h = h_;
	}
	int Area() {
		return w * h;
	}
	int Perimeter() {
		return 2 * ( w + h );
	}
}
;//必须有分号


int main() {
	int w, h;
	CRectangle r; //r是一个对象
	cin >> w >> h;
	r.Init(w, h);
	cout << r.Area() << endl << r. Perimeter();
	return 0;
}
