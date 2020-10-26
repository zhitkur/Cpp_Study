#include <iostream>
#include <bitset>

int main() {
    using namespace std;

    // << left shift
    // >> right shift
    // ~, &, |, ^ bitwise NOT, AND, OR, XOR

    unsigned int a = 0b1100;
    unsigned int b = 0b0110;

    cout << std::bitset<16>(a) << endl;
    cout << std::bitset<16>(~a) << " " << (~a) << endl;    // NOT
    cout << std::bitset<4>(a & b) << endl;                 // AND
    cout << std::bitset<4>(a | b) << endl;                 // OR
    cout << std::bitset<4>(a ^ b) << endl;                 // XOR
    return 0;
}