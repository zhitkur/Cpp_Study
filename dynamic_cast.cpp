// 동적 형변환
// static_cast를 사용해도 되지만, dynamic_cast가 런타임 오류 체크하고 막아준다.
#include <iostream>
#include <string>
using namespace std;

class Base {
public:
    int m_i = 0;

    virtual void print() {
        cout << "I'm Base" << endl;
    }
};

class Derived1 : public Base {
public:
    int m_j = 1024;

    virtual void print() override {
        cout << "I'm derived" << endl;
    }
};

class Derived2 : public Base {
public:
    string m_name = "Dr. Two";

    virtual void print() override {
        cout << "I'm derived" << endl;
    }
};

int main() {
    Derived1 d1;
    d1.m_j = 2048;
    Base *base = &d1;

    // 동적 형변환 Base -> Derived1
    auto *base_to_d1 = dynamic_cast<Derived1 *>(base);
    cout << base_to_d1->m_j << endl;
    base_to_d1->m_j = 256;

    cout << d1.m_j << endl;
    return 0;
}