#include <iostream>
#include <bitset>

int main() {
    using namespace std;

    // << left shift
    // >> right shift
    // ~, &, |, ^ bitwise NOT, AND, OR, XOR

    unsigned int a = 3;

    cout << std::bitset<8>(a) << " " << (a) << endl;                  // 3
    cout << std::bitset<8>(a << 1) << " " << (a << 1) << endl;        // 6
    cout << std::bitset<8>(a << 2) << " " << (a << 2) << endl;        // 12
    cout << std::bitset<8>(a << 3) << " " << (a << 3) << endl;        // 24
    cout << std::bitset<8>(a << 4) << " " << (a << 4) << endl;        // 48

    return 0;
}