// std::array
#include <iostream>
#include <array>
#include <algorithm>
using namespace std;

void printlength(const array<int, 5>& my_arr) {
    cout << my_arr.size() << endl;
}

int main()
{
    // 기존 array
    int arr[] = { 1, 2, 3, 4, 5 };
    // std::array
    // 함수 파라미터로 넘길 때 아주 편하다.
    array<int, 5> my_arr = { 1, 21, 3, 40, 5 };

    /*cout << my_arr.at(0) << endl;
    cout << my_arr.size() << endl;
    printlength(my_arr);*/

    // for-each 
    for (auto &element : my_arr)
        cout << element << " ";
    cout << endl;

    std::sort(my_arr.begin(), my_arr.end());
    // std::sort(my_arr.rbegin(), my_arr.rend()); 역순 정렬 

    for (auto& element : my_arr)
        cout << element << " ";
    cout << endl;

    return 0;
}