// 비교 연산자 오버로딩 (<, ==)
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Cents {
private:
    int _cents;
public:
    // Constructor
    Cents(int cents = 0) { _cents = cents; }
    
    int getCents() const { return _cents; }
    int &getCents() { return _cents; }
    
    // 비교 연산자 오버로딩
    friend bool operator == (const Cents &c1, const Cents &c2) {
        return c1._cents == c2._cents;
    }

    // sort를 사용할 땐 비교연산에서 less than이 되어야 한다 (즉, return 값이 more than이 되면 오류가 발생 e.g. return c1._cents > c2._cents;)
    friend bool operator < (const Cents &c1, const Cents &c2) {
        return c1._cents < c2._cents;
    }

    friend std::ostream &operator << (std::ostream &out, const Cents &cents) {
        out << cents._cents;
        return out;
    }
};

int main() {
    vector<Cents> arr(20);
    for (unsigned i = 0; i < 20; i++) {
        arr[i].getCents() = i;
    }

    std::random_shuffle(begin(arr), end(arr));

    for (auto &e : arr)
        cout << e << " ";
    cout << endl;

    std::sort(begin(arr), end(arr));

    for (auto &e : arr)
        cout << e << " ";
    cout << endl;

    return 0;
}