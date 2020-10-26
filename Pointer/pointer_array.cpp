#include <iostream>
using namespace std;

int main() { 
    const char *p = "ABCD";     // 문자열 값 변경 X -> 왜 why? 문자열 상수의 주소를 가져왔으니까 ㅋㅋ && 상수의 주소를 받았으니 const를 사용해야 한다.
    char sp[] = "ABCD";   // 문자열 값 변경 O -> 왜 why? 문자열의 값을 가져왔으니까 ㅋㅋ

    // 왜 포인터 문자열의 형변환을 void*로 했을까?
    // char배열이 문자열이기 때문에 문자열의 시작주소를 가리키는 char*를 출력할 경우,
    // cout 자체에 문자열을 보여주도록 기능구현이 되어있기 때문이다.
    // 따라서 포인터변수가 담고있는 주소값이 보고싶을 경우 void*로 형변환을 해주는 것이다.
    cout << p << " " << *p << endl;           // output : ABCD A
    cout << (void *)p << endl;                // output : 00D0AC54

    cout << sizeof(*p) << endl;               // output : 1 (문자열 주소의 첫 번째 바이트 값 == p[0])
    cout << sizeof(p) << endl;                // output : 4 (포인터 변수의 크기)

    cout << sp << " " << *sp << endl;         // output : ABCD A
    cout << (void *)sp << endl;               // output : 001AFDE8

    cout << sizeof(*sp) << endl;              // output : 1 (문자열 주소의 첫 번째 바이트 값 == p[0])
    cout << sizeof(sp) << endl;               // output : 5 (문자열 값의 길이)
    return 0;
}