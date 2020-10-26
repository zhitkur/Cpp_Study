#include <iostream>
using namespace std;

// 배열의 첫번째 값만 복사하기 때문에, 결국 포인터로 받아도 똑같다. int students_scores[]
void doSomething(int *students_scores) {

    cout << (int)students_scores << endl;
    // 아래 students_scores는 포인터 변수기 때문에 그 자체가 다른 주소값을 가진다. 주소값을 저장하는 다른 변수의 주소를 반환한다.
    cout << (int)&students_scores << endl;
    // doSomething 함수에서의 배열 sizeof 크기는 포인터 크기를 반환하기 때문에 메인함수와의 크기가 다르다.
    cout << "size in doSomething " << sizeof(students_scores) << endl;  

}

int main() {

    // 배열 선언은 컴파일 타임에서 결정된다.
    // 예를 들면, 배열 길이를 사용자 입력을 통해 받는 것은 런타임에서 결정되기 때문에 불가능하다. 
    // 다음과 같이 const 상수를 지정해서 배열길이를 넘겨주는 것은 가능하다.
    const int num_students = 20;

    int students_scores[num_students]{ 1, 2, 3, 4, 5, };

    // 밑 두 배열의 주소값은 동일하다. 결국 배열이름은 포인터 첫번째 주소를 반환하는 것과 같다.
    cout << (int)students_scores << endl;   
    cout << (int)&students_scores << endl;  
    cout << "size in main " << sizeof(students_scores) << endl;
    cout << '\n';

    doSomething(students_scores);
    
    return 0;
}