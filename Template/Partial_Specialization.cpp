// 템플릿을 부분적으로 특수화하기
// 템플릿 클래스 안에 있는 하나의 메소드(함수)를 특수화하고 싶다면, 
// 상속을 사용해 자식 클래스로 따로 빼서 그 부분만 public안에 넣어서 overriding을 해주면 된다.
#include <iostream>
using namespace std;

template <class T, int T_SIZE>
class StaticArray_BASE {
private:
    T m_array[T_SIZE];
public:
    T *getArray() { return m_array; }

    T &operator[](int index) {
        return m_array[index];
    }

    void print() {
        for (int i = 0; i < T_SIZE; i++) {
            cout << (*this)[i] << ' ';
        }
        cout << endl;
    }
};

// 상속을 사용하여 특수화할 함수를 따로 빼서 그 함수만 특수화해준다.
template<class T, int T_SIZE>
class StaticArray : public StaticArray_BASE<T, T_SIZE> {};
 
// print함수를 char 타입 특수화, overriding하였다.
template<int T_SIZE>
class StaticArray<char, T_SIZE> : public StaticArray_BASE<char, T_SIZE> {
public:
    void print() {
        for (int i = 0; i < T_SIZE; i++) {
            cout << (*this)[i];
        }
        cout << endl;
    }
};

int main()
{
    StaticArray<int, 4> int4;
    int4[0] = 1;
    int4[1] = 2;
    int4[2] = 3;
    int4[3] = 4;

    int4.print();   // output : 1 2 3 4

    StaticArray<char, 14> char14;
    strcpy_s(char14.getArray(), 14, "Hello, World");    // output : Hello, World
    char14.print();
    return 0;
}