// 다중 상속과 주의점
#include <iostream>
using namespace std;

// 우리가 사용하는 cout, cin도 다중 상속으로 구현되어 있다.
// 하지만, 다이아몬드 상속은 피하자. 
/*
다이아몬드 상속 e.g
class A {};
class B1 : public A {};
class B2 : public A {};
class C : public B1, public B2 {};     // C가 다중 상속을 하지만 B1, B2도 A를 상속한다. 큰 오류가 발생할 수도 있음
*/

class USBDevice {
private:
    long m_id;
public:
    USBDevice(long id) : m_id(id) {}

    long getID() { return m_id; }
    void plugAndPlay() {}
};

class NetworkDevice {
private:
    long m_id;
public:
    NetworkDevice(long id) : m_id(id) {}

    long getID() { return m_id; }
    void networking() {}
};

class USBNetworkDevice : public USBDevice, public NetworkDevice {
public:
    USBNetworkDevice(long usb_id, long net_id) : USBDevice(usb_id), NetworkDevice(net_id) {}
// USBNetworkDevice(long id) : USBDevice(id), NetworkDevice(id) {}
// 위와 같은 생성자는 파라미터가 같은 값을 사용할 때만 사용가능하다.
};

int main() {
    USBNetworkDevice my_device(3.14, 6.022);

    my_device.networking();
    my_device.plugAndPlay();

    // 중복된 함수에서 문제가 생길 수 있다.
    // my_device.getID();
    // 다음과 같이 해결할 수도 있다.
    my_device.USBDevice::getID();
    my_device.NetworkDevice::getID();
    return 0;
}