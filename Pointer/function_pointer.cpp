// 함수 포인터 홀짝 구분
#include <iostream>
#include <array>
#include <functional>   // std::function<bool(const int&)> fcnptr = isEven;
using namespace std;

// typedef bool(*check_fcn_t)(const int&);
// using check_fcn_t = bool(*)(const int&);

bool isEven(const int& number) {
    if (number % 2 == 0) return true;
    else return false;
}

bool isOdd(const int& number) {
    if (number % 2 != 0) return true;
    else return false;
}

// bool 함수 포인터를 사용해 구분
// default parameter를 통해 인자값이 없을 경우 기본값인 짝수를 반환한다.
void printnumbers(const array<int, 10>& arr, bool (*check_fcn)(const int&) = isEven) {
    for (auto& ele : arr) {
        if (check_fcn(ele) == true) cout << ele << " ";
    }
    cout << endl;
}

int main() {
    std::array<int, 10> arr{ 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    // 함수 자체도 포인터이므로, 이름 자체를 넣어주면 됨
    printnumbers(arr);
    printnumbers(arr, isOdd);
    return 0;
}