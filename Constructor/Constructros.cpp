/*
인스턴스를 만들 때 기본 생성자가 있을 경우 ()괄호는 생략하고 만들어야 한다.
혹은 매개변수 생성자를 사용하고 싶을 경우에는 Uniform 초기화를 해주면 된다. e.g. Frcation frac{10, 20};
*/
#include <iostream>
using namespace std;

class Fraction 
{
private:
    int _numerator;
    int _denominator;
public:

    /* 생성자가 하나도 없을 때는 아무 일도 안하는 Default 생성자가 숨어있다. e.g. Fraction() {}
    *  그래서 인자값 없이 인스턴스를 만들 수 있는 것이다. 
    *  (하나라도 생성자를 정의하면, 기본 생성자는 생성하지 않으므로 아래와 같이 Default 생성자를 따로 만들었다)
    */

    // Default Consturctor
    Fraction() {
        _numerator = 1;
        _denominator = 3;
    }
    // Parameter Consturctor
    Fraction(const int &num_in, const int &den_in) {
        this->_numerator = num_in;
        this->_denominator = den_in;
    }
    
    void print() {
        cout << _numerator << " / " << _denominator << endl;
    }
};

int main() {
    Fraction frac;
    frac.print();
    return 0;
}