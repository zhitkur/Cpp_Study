#include <iostream>
#include <fstream>
using namespace std;

class Point {
private:
    double _x, _y, _z;

public:
    // Constructor
    Point(double x = 0.0, double y = 0.0, double z = 0.0) : _x(x), _y(y), _z(z) {}

    // x축 반환
    double getX() { return _x; }
    // y축 반환
    double getY() { return _y; }
    // z축 반환
    double getZ() { return _z; }


    // 입출력 연산자 오버로딩
    friend std::ostream& operator << (std::ostream &out, const Point &point) {
        out << point._x << " " << point._y << " " << point._z;
        return out;
    }

    friend std::istream &operator >> (std::istream &in, Point &point) {
        in >> point._x >> point._y >> point._z;
        //out << point._x << " " << point._y << " " << point._z;
        return in;
    }
};

int main() {

    ofstream of("out.txt");

    //Point p1(0.0, 0.1, 0.2), p2(3.4, 1.5, 2.0);
    Point p1, p2;
    cin >> p1 >> p2;
    /*p1.print();
    p2.print();*/

    // 연산자 오버로딩 출력
    cout << p1 << " , " << p2 << endl;
    of << p1 << " , " << p2 << endl;
    of.close();
    return 0;
}