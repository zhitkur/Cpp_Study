/*

함수에 배열을 전달하는 방식으로 인해 함수에 전달된 배열에서는 제대로 작동하지 않는다.
별도의 함수에서 sizeof를 사용하면 '배열 크기'가 아니라 '포인터 크기'를 출력한다.

double totalscore2(int scores[]) {
    const int numstudents = sizeof(scores) / sizeof(scores[0]);    // Error !!
    int totalscore = 0;

    for (int student = 0; student < numstudents; student++) {
        totalscore += scores[student];
    }

    double averagescore = static_cast<double>(totalscore) / numstudents;
    return averagescore;
}
*/

// 올바른 sizeof 사용법은 다음과 같다.
// 배열 크기를 정상적으로 출력하므로 평균치를 계산할 수 있다.
#include <iostream>
using namespace std;

double totalscore(int scores[], const int numstudents) {
    int totalscore = 0;

    for (int student = 0; student < numstudents; student++) {
        totalscore += scores[student];
    }

    double averagescore = static_cast<double>(totalscore) / numstudents;
    return averagescore;
}

int main() {
    int scores[]{ 100, 90, 100, 100, 100 };
    const int numstudents = sizeof(scores) / sizeof(scores[0]);
    double result = totalscore(scores, numstudents);
    cout << "average score students :  " << result << endl;
    return 0;
}

