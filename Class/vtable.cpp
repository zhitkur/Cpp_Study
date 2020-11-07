#include <iostream>
#include <string>
using namespace std;

// virtual function table
// 가상(함수) 표

class Base {
public:
    // FunctionPointer &__vptr;
    virtual void func1() {};
    void func2() {};
};

class Derived : public Base {
public:
    // FunctionPointer *__vptr;
    void func1() {};
    void func3() {};
};

int main() {
    cout << sizeof(Base) << endl;
    cout << sizeof(Derived) << endl;
    return 0;
}