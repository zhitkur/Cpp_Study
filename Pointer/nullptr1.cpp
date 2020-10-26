#include <iostream>
#include <cstddef>    // std::nullptr_t nptr; -> 파라미터로 nullptr만 받아야할 때 사용할 수 있다.
using namespace std;

/*
결국 nullptr를 사용하는 이유는 초기화를 해주지 않는 상태인 쓰레기값을 
사용하게 되면 큰 문제를 일으킬수도 있기 때문에 미연에 방지하기 위해서.
*/

void doSomething(double* ptr) {
    // 메인함수의 포인터주소값과 다르다. 결국 포인터도 변수이기 때문에 복사해서 사용.
    cout << "address of ptr variable in doSomething() " << &ptr << endl;  

    if (ptr != nullptr) {
        // do something useful
        cout << *ptr << endl;    
    }
    else {
        // do nothing with ptr
        cout << "Null ptr, do nothing" << endl;
    }
}

int main(){
    int* cptr = 0; // c-style 0 or NULL
    double* ptr = nullptr; // modern c++

    doSomething(ptr);      // Null ptr, do nothing
    doSomething(nullptr);  // Null ptr, do nothing

    double d = 123.4;

    doSomething(&d);      // 123.4

    ptr = &d;
    doSomething(ptr);      // 123.4
    
    cout << "address of ptr variable in main() " << &ptr << endl;

    return 0;
}