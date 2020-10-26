#include <iostream>
#include <bitset>

int main() {
    using namespace std;

    // << left shift
    // >> right shift
    // ~, &, |, ^ bitwise NOT, AND, OR, XOR

    unsigned int a = 1024;

    cout << std::bitset<16>(a) << " " << (a) << endl;                  // 1024
    cout << std::bitset<16>(a >> 1) << " " << (a >> 1) << endl;        // 512
    cout << std::bitset<16>(a >> 2) << " " << (a >> 2) << endl;        // 256
    cout << std::bitset<16>(a >> 3) << " " << (a >> 3) << endl;        // 128
    cout << std::bitset<16>(a >> 4) << " " << (a >> 4) << endl;        // 64

    return 0;
}