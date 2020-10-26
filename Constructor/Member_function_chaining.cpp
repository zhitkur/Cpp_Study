#include <iostream>
#include <string>
using namespace std;

class Calc {
private:
    int _value;

public:
    Calc(int init_value) :_value(init_value) {}

    // Member Function Chaining 연쇄 호출
    // 실용성에 대해서는 명확하진 않다. 
    Calc &add(int value) { _value += value; return *this; }
    Calc &sub(int value) { _value -= value; return *this; }
    Calc &mul(int value) { _value *= value; return *this; }

    void print() {
        cout << _value << endl;
    }
};

int main() {
    Calc cal(10);
    cal.add(10).sub(1).mul(2).print();
    return 0;
} 