#include <iostream>
using namespace std;

struct Mystruct {
    int arr[5]{ 9, 7, 5, 3, 1 };
};

void doSomething(Mystruct *ms) {
    cout << sizeof((*ms).arr) << endl;
}
int main() {
    Mystruct ms;

    // array가 struct, class안에 들어있을 경우, 
    // 포인터로 강제변환 되지않고, array 자체가 간다.
    cout << ms.arr[0] << endl;          // 9
    cout << sizeof(ms.arr) << endl;     // 20
    doSomething(&ms);                   // 20
    
    return 0;
}