/*
생성자 멤버 초기화 목록
다음과 같이 변수 선언과 동시에 copy initalization을 해주면 우선순위는 멤버 초기화 목록이다.
class A{
public:
   int _a = 100;
   int _b = 200;
   int _c = 300;

public:
  // 우선순위
  A() : _a(1), _b(2), _c(3) { } -> output : _a = 1, _b = 2, _c = 3
*/
#include <iostream>

class Something{
private:
  int _i;
  double _d;
  char _c;
  int _arr[5];

public:
  // Constructor Member initalizer list 생성자 멤버 초기화 목록
  Something() : _i(2), _d(3.14), _c('a'), _arr{1, 2, 3, 4, 5} { }

  void print() {
        cout << _i << " " << _d << " " << _c  << " " << _b.get_b() << endl;
        for (auto &e : _arr)
            cout << e << " ";
        cout << endl;
    }
};

int main() {
    Something st;
    st.print();
    return 0;
} 