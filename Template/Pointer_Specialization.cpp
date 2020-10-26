// 포인터에 대한 템플릿 특수화
#include <iostream>
using namespace std;

template<class T>
class A {
private:
    T m_value;

public:
    A(const T &input) :m_value(input) {}

    void print() {
        cout << m_value << endl;
    }
};

template<class T>
// <T *> - T가 포인터일 때만 특수화가 되도록 설정.
// 필요에 따라서, 포인터에 대해서 특수화를 시키는 클래스를 '상속'구조를 이용해서도 구현을 가능하다.
class A<T *> {
private:
    T* m_value;

public:
    A(T *input) :m_value(input) {}

    void print() {
        cout << *m_value << endl;
    }
};

int main()
{
    A<int> a_int(123);
    a_int.print();

    int temp = 456;

    A<int *> a_int_ptr(&temp);
    a_int_ptr.print();

    double temp_d = 3.141592;
    A<double *> a_double_ptr(&temp_d);
    a_double_ptr.print();
    return 0;
}