/*
 Interface class 
 내부에 들어있는 모든 멤버 함수(메소드)가 pure virtual function일 때 인터페이스 클래스라고 한다.
 외부에서 사용할 때 이러이러한 기능이 있을거다. 라고 
 예측을 할 수 있는 인터페이스(중계기)역할을 해주기 때문이다.
*/
#include <iostream>
#include <string>
using namespace std;

// Interface class 
class IErrorLog {
public:
    virtual bool reportError(const char *errorMessage) = 0;

    virtual ~IErrorLog() {}
};

// 아래 두 자식 클래스는 pure virtual function을 사용하는 부모 클래스를 상속받고 있기에
// reportError 함수가 반드시 있어야 한다.
class FileErrorLog : public IErrorLog {
public:
    bool reportError(const char *erorMessage) override {
        cout << "Writing error to a file" << endl;
        return true;
    }
};

class ConsoleErrorLog : public IErrorLog {
public:
    bool reportError(const char *errorMessage) override {
        cout << "Printing error to a console" << endl;
        return true;
    }
};

void doSomething(IErrorLog &log) {
    log.reportError("Runtime error!!");
}

int main() {
    FileErrorLog file_log;
    ConsoleErrorLog console_log;

    doSomething(file_log);
    doSomething(console_log);
    return 0;
}