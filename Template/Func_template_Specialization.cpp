// 앞서 얘기했듯이 템플릿은 컴파일 타임에 모든 게 결정되어야 한다.
// 함수 템플릿 특수화
#include <iostream>
using namespace std;

template<typename T>
T getMax(T x, T y)
{
    return (x > y) ? x : y;
}

template<>
char getMax(char x, char y)
{
    cout << "경고! 문자 끼리 비교할 때는 주의 해주세요" << endl;

    return (x > y) ? x : y;
}

int main()
{
    cout << getMax('a' , 'b') << endl;
    return 0;
}