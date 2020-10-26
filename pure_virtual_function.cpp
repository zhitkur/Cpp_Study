/*
pure virtual function
순수 가상 함수
위 함수를 사용할 시 해당 함수의 body는 없다.
자식 클래스가 특정 함수를 꼭 가지고 있어야 한다면 위 함수를 사용해도 된다.
가장 중요한 건 class를 설계할 때 상속 구조 자체를 설계하도록 도와주는 문법이라고도 생각하자
그리고 순수 가상 함수가 포함된 클래스를 '추상 기본 클래스'라고 부른다.
*/

#include <iostream>
#include <string>
using namespace std;

class Animal {
protected:
    string m_name;
public:
    Animal(std::string name) : m_name(name) {}

    string getName() { return m_name; }

    // pure virtual function
    // 부모 클래스에서는 어떻게 할지 모르겠다. 
    // 하지만, 자식 클래스에서는 반드시 구현하라는 의미
    virtual void speak() const = 0; 
    
    /*
    * 일반적인 함수들을 부모 클래스에 모아두고, 재활용할 수 있다면 하고
    * 혹은 자식 클래스에 필요한 특화된 것이 있다면 override를 했다.
    virtual void speak() const
    {
        cout << m_name << " ??? " << endl;
    }
    */
};

class Dog : public Animal {
public:
    Dog(string name) : Animal(name) {}

    void speak() const {
        cout << m_name << " Woof " << endl;
    }
};

class Cow : public Animal {
public:
    Cow(string name) : Animal(name) {};
};

int main() {
    Animal *p;
    Dog dog("sodam");
    p = &dog;
    p->speak();
    
    Cow cow("hello");  // error
    // 부모 클래스가 pure virtual function을 사용했는데
    // 자식 클래스에 선언이 안되어 있기 때문에 사용할 수 없다.
    return 0;
}