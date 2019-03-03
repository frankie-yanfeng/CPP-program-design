#include <iostream>

class CCar {
 private:
 int price;
 friend class CDriver; //声明CDriver为友元类
};
class CDriver {
public:
 CCar myCar;
 void ModifyCar() { //改装汽车
 myCar.price += 1000; // CDriver是CCar的友元类可以访问其私有成员
 }
};
int main() { return 0; }