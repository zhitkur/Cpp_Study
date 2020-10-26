// 익명 객체
#include <iostream>
using namespace std;

class Cents {
private:
    int _cents;
public:
    // parameter Constructor
    Cents(int cents) { _cents = cents; }

    // Member function
    int getCents() const { return _cents; }
};

Cents add(const Cents &c1, const Cents &c2) {
    return Cents(c1.getCents() + c2.getCents());
}

int main() {
    cout << add(Cents(6), Cents(8)).getCents() << endl;
    return 0;
} 