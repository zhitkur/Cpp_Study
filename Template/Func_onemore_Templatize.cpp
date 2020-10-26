// 멤버 함수를 한번 더 템플릿화 하기
#include <iostream>
using namespace std;

template<class T>
class A {
private:
    T m_value;
public:
    A(const T &input) :m_value(input) {}

    template<typename TT>
    // 멤버 함수를 한번 더 템플릿화 하기
    void doSomething(const TT &input) {
        cout << typeid(T).name() << " " << typeid(TT).name() << endl;
        cout << (TT)m_value << endl;
    }

    void print() {
        cout << m_value << endl;
    }
};

int main()
{
    A<char> a_char('A');
    a_char.print();

    // 멤버 함수에 파라미터가 있는 경우
    a_char.doSomething(int());
    // 멤버 함수에 파라미터가 없는 경우
    // a_char.doSomething<int>();
    return 0;
}