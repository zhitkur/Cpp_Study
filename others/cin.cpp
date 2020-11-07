/*
std::cin.fail / std::cin.clear / std::cin.ingore
사용자 측면을 고려해서 입력 잘받는 연습
*/
#include <iostream>
using namespace std;

int getint() {

    while (true) {
        cout << "Enter an integer number: ";
        int x;
        cin >> x;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            cout << "Invalid number, try again" << endl;
        }
        else {
            std::cin.ignore(32767, '\n');
            return x;
        }
    }
}

char getoperator() {

    while (true) {
        cout << "Enter an operator (*, /, +, -) : ";
        char op;
        cin >> op;
        std::cin.ignore(32767, '\n');

        if (op == '*' || op == '/' || op == '+' || op == '-')
            return op;
        else {
            cout << "Invalid operator" << endl;
        }
    }
}

void printresult(int x, char op, int y) {

    if (op == '*') cout << x * y << endl;
    else if (op == '/') cout << x / y << endl;
    else if (op == '+') cout << x + y << endl;
    else if (op == '-') cout << x - y << endl;
    else {
        cout << "Invalid operator" << endl;
        exit(0);
    }
}

int main() {
    int x = getint();
    char op = getoperator();
    int y = getint();

    printresult(x, op, y);
    
    return 0;
}