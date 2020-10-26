#include <iostream>
#include <bitset>
int main() {
    using namespace std;

    /*
    0110>>2 -> demical    
    5 | 12 -> demical    
    5 & 12 -> d
    5 ^ 12 -> d
    */

    unsigned int a = 5;         // 0b0101
    unsigned int b = 12;        // 0b1100    
                            
    cout << std::bitset<4>(a | b) << " " << (a | b) << endl;    // 0b1101 13
    cout << std::bitset<4>(a & b) << " " << (a & b) << endl;    // 0b0100 4
    cout << std::bitset<4>(a ^ b) << " " << (a ^ b) << endl;    // 0b1001 9
    cout << std::bitset<32>(~a) << " " << (~a) << endl;         // 0b11111111111111111111111111111010    4294967290 
    return 0;
}
