// 클래스 템플릿 특수화
// 특수화 : 템플릿에서 특정 타입에 대해서 다른 실행 처리를 하고 싶을 때 그 타입에 대해서만 특수화한다.
#include <iostream>
using namespace std;

template<typename T>
class A {
public:
    A(const T &input) {}
    void doSomething() {
        cout << typeid(T).name() << endl;
    }
    void test() {}
};

// class template 특수화(특정 타입에 대해 다른 실행처리)
// char 타입에 대해서 다른 실행 처리.
template<>
class A<char> {
public:
    A(const char &temp) {}
    void doSomething() {
        cout << "Char type specialization" << endl;
    }
};

int main()
{
    A<int> a_int(1);
    A<double> a_double(3.14);
    A<char> a_char('a');

    a_int.doSomething();
    a_double.doSomething();
    a_char.doSomething();
    return 0;
}