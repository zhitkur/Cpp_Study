#include <iostream>
#include <bitset>

using namespace std;

int main() {
    // bit Mask

    const unsigned int red_mask = 0xFF0000;
    const unsigned int green_mask = 0x00FF00;
    const unsigned int blue_mask = 0x0000FF;
    
    unsigned int pixel_color = 0xDAA520;

    cout << std::bitset<32>(pixel_color) << endl;

    unsigned char red = (pixel_color & red_mask) >> 16;
    unsigned char green = (pixel_color & green_mask) >> 8;
    unsigned char blue = pixel_color & blue_mask;
    cout << "blue " << std::bitset<8>(red) << " " << int(red) << endl;
    cout << "blue " << std::bitset<8>(green) << " " << int(green) << endl;
    cout << "blue " << std::bitset<8>(blue) << " " << int(blue) << endl;
    

    return 0;
}