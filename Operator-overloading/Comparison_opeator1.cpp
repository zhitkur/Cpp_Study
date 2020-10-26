// 비교 연산자 오버로딩 (==, !=, <=, >=, >, <)
// 전부다 구현하진 않았다. 직접 해보는 것도 좋은 공부
#include <iostream>
using namespace std;

class Cents {
private:
    int _cents;
public:
    // Constructor
    Cents(int cents = 0) { _cents = cents; }
    
    int getCents() const { return _cents; }
    int &getCents() { return _cents; }
    
    friend bool operator == (const Cents &c1, const Cents &c2) {
        return c1._cents == c2._cents;
    }

    friend std::ostream &operator << (std::ostream &out, const Cents &cents) {
        out << cents._cents;
        return out;
    }
};

int main() {
    Cents cents1(6);
    Cents cents2(6);

    if (cents1 == cents2)
        cout << "Equal" << endl;

    cout << std::boolalpha;
    return 0;
}