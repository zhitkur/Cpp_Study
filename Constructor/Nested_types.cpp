// 클래스 안에 포함된 자료형, Nested types
// 특정 class만 사용하는 Data Type일 경우에는 class안에 임시로 사용할 수 있게 넣어주는 것도 좋은 방법이다.
#include <iostream>
using namespace std;

class Fruit {
public:
    // Nested types
    enum FruitType {
        APPLE, BANANA, CHERRY,
    };
    /*
    class InnerClass {}
    struct InnerStruct {}
    */
private:
    FruitType _type;
public:
    // parameter Consturctor
    Fruit(FruitType type) : _type(type){}

    FruitType getType() { return _type; }
};

int main() {
    Fruit apple(Fruit::APPLE);

    if (apple.getType == Fruit::APPLE) {
        cout << "Apple" << endl;
    }
    return 0;
} 