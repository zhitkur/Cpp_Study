#include <iostream> 
#include <fstream>  // 파일로 출력 ofstream
using namespace std;

class Date {
private:
    int year;
    int month;
    int day;
public:
    Date() {
        year = 0, month = 0, day = 0;
    }
    Date(int d) : day(d) {};
    Date(int y, int m, int d) : year(y), month(m), day(d) {};
    bool isLeapYear(int y) {
        return (y = (year % 4 == 0));
    }
    /*void print() const {
        cout << "year: " << year << endl;
        cout << "month: " << month << endl;
        cout << "day: " << day << endl;
    }*/
    Date nextMonth() {
        return Date(year, month + 1, day);
    }
    // getters
    int getYear() const { return year; }
    int getMonth() const { return month; }
    int getDay() const { return day; }
    int& getDay() { return day; }

    friend Date operator + (const Date &d1, const Date &d2) {
        return Date(d1.getDay() + d2.getDay());
    }
    // setters
    void setYear(int y) { year = y; }
    void setMonth(int m) { month = m; }
    void setDay(int d) { day = d; }

    friend std::ostream &operator << (std::ostream & out, const Date & date) {
        out << date.year << " " << date.month << " " << date.day;
        return out;
    }

    friend std::istream &operator >> (std::istream &in, Date &date) {
        in >> date.year >> date.month >> date.day;
        return in;
    }
};

int main() {
    // 파일로 출력
    ofstream of("out.txt");

    Date d1(98, 12, 18);
    Date d2 = d1.nextMonth();

    /*cout << d1 << " " << d2 << endl;
    of << d1 << " " << d2 << endl;
    of.close();*/
    
    // 연산자 오버로딩을 통한 + 각 날짜별 day를 더한 값을 출력한다. 
    // Date(10)처럼 익명 클래스를 사용해 넘겨줄 수도 있다.
    cout << (d1 + d2 + Date(10)).getDay() << endl;
    return 0;
}