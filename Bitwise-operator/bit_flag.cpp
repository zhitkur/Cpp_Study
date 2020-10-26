#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // bit Flag

    const unsigned char opt0 = 1 << 0;        // 0000`0001
    const unsigned char opt1 = 1 << 1;        // 0000`0010
    const unsigned char opt2 = 1 << 2;        // 0000`0100
    const unsigned char opt3 = 1 << 3;        // 0000`1000
    // opt4, 5, 6, 7                           0001`0000, 0010`0000, 0100`0000, 1000`0000

    /*
    cout << std::bitset<8>(opt0) << endl;
    cout << std::bitset<8>(opt1) << endl;
    cout << std::bitset<8>(opt2) << endl;
    cout << std::bitset<8>(opt3) << endl;
    */

    unsigned char items_flag = 0;
    cout << "No item " << std::bitset<8>(items_flag) << endl;

    // item0 on
    items_flag |= opt0;
    cout << "Item0 obtained " << std::bitset<8>(items_flag) << endl;
    
    // item3 on
    items_flag |= opt3;
    cout << "Item3 obtained " << std::bitset<8>(items_flag) << endl;

    // item3 lost
    // cout << std::bitset<8>(items_flag) << " " << std::bitset<8>(~opt3) << endl;
    items_flag &= ~opt3;
    cout << "Item3 lost " << std::bitset<8>(items_flag) << endl;

    // has item1
    if (items_flag & opt1) { cout << "Has item1" << endl; }
    else { cout << "Not have item1" << endl; }
    // has item0
    if (items_flag & opt0) { cout << "Has item0" << endl; }

    // obtain item 2, 3
    items_flag |= (opt2 | opt3);
    // cout << std::bitset<8>(opt2 | opt3) << endl;
    cout << "Item2, 3 obtained " << std::bitset<8>(items_flag) << endl;

    // if has opt2 AND Not have opt -> Not have op2, have opt1
    if (items_flag & opt2 && !(items_flag & opt1)) {
        items_flag ^= opt2;
        items_flag ^= opt1;
    }

    cout << std::bitset<8>(items_flag) << endl;

    return 0;
}