
#include <iostream>
using namespace std;

class mobile_phone {
private:
    int size = 15;
    int width = 7;
    string brand = "iphone";
    int serial_number = 15;
    string color = "black";
    string alarm = "loud";
    int battery;
public:
    void Noize(string alarm) {
        cout << "Time to wake up!" << alarm << "\n";
    }
    void Call(string ringtone) {
        cout << "Someone is calling!" << ringtone << "\n";
    }
    void count(string calculator) {
        cout << "how much will it be?" << calculator << "\n";
    }
    void Update() {
        cout << "Your iphone is updating...\n";
    }
    void Discharge() {
        cout << "little quantity of energy left\n";
    }
    void setbattery(int b1) {              // Сэттэр на 19.09.2023
        if (b1 >= 0 and b1 <= 100) {
            battery = b1;
        }
        else {
            cout << "No\n";
        }
    }
    int getbattery() const {                // Гэттэр на 19.09.2023
        return battery;
    }

};
class human {
private:
    int height = 192;
    int ears_count = 2;
    double weight = 65.3;
    string name = "Jonathan";
    string eyes_color = "green";
    string noize = "knock";
    int eye;
public:
    void MakeNoize(string noize) {
        cout << "Jonathan is knocking!" << noize << "\n";
    }
    void Eat(string meal) {
        cout << "Jonathan is eating" << meal << "\n";
    }
    void Hobby(string entertainment) {
        cout << "Jonathan is playing games" << entertainment << "\n";
    }
    void Feel() {
        cout << "Jonathan is stressed\n";
    }
    void sleep() {
        cout << "Jonathan is sleeping\n";
    }
    void Wakeup(mobile_phone& who) {
        cout << "Jonathan is wake up\n";
    }
    void opening_door() {
        cout << "Jonathan is opening door\n";
    }
    void seteyes(int e1) {                 // Сэттэр на 19.09.2023
        if (e1 >= 0 and e1 <= 2) {
            eye = e1;
        }
        else {
            cout << "You are unusual human\n";
        }
    }
    int geteye() const {                    // Гэттэр на 19.09.2023
        return eye;
    }
};
class sadhuman : public human {
private:
    void Feel() {
        cout << "Human is feeling bad\n";    
    }
};

class room {
private:
    int height = 250;
    int width = 500;
    int window;
    string name = "bedroom";
    string walls_color = "yellow";
public:
    void Noize(human& who) {
        cout << "Someone knocking on the door\n";
    }
    void exist() {
        cout << "Room is existing\n";
    }
    void Destroy() {
        cout << "Walls are falling\n";
    }
    void Repair(human& who) {
        cout << "room is repared by humans\n";
    }
    void Feel() {
        cout << "room can`t feel anything, maybe";
    }
    void setwindow(int w1) {    // Сэттэр на 19.09.2023
        if (w1 >= 0) {
            window = w1;
        }
        else {
            cout << "your room have windows\n";
        }
    }
    int getwindow() const {   // Гэттэр на 19.09.2023
        return window;
    }
};

class weights {
private:
    int size = 11;
    int width = 5;
    string color = "gray";
    string weight_plat = "blue";
    int button = 5;
    string fuction = "weighting";
    int pcs;

public:
    void inclusion(string button_on) {
        cout << "00000" << button_on << "\n";
    }
    void unit(string button_unit) {
        cout << "turn on oz mode" << button_unit << "\n";
    }
    void weighting(human& who) {
        cout << "calculating weight" << "\n";
    }
    void light(string light_button) {
        cout << "info platform is glowing";
    }
    void setpcs(int p1) {  // Сэттэр на 19.09.2023
        if (p1 = 1) {
            pcs = p1;
        }
        else {
            cout << "You don`t have button pcs\n";
        }
    }
    int getpcs() const {   // Гэттэр на 19.09.2023
        return pcs;
    }
};

class door {

private:
    int size = 190;
    int width = 100;
    string color = "brown";
    string kh_color = "gold";
    string handle_size = "black";
    int handle;
public:
    void open() {
        cout << "door is opening\n";
    }
    void close() {
        cout << "door is closing\n";
    }
    void closing(string key) {
        cout << "door is closing with a key" << key << "\n";
    }
    void opening(string key) {
        cout << "door is opening with a key" << key << "\n";
    }
    void sethandle(int h) {    // Сэттэр на 19.09.2023
        if (h = 1)
        {
            handle = h;
        }
        else {
            cout << "You don`t have handle\n";            
        }
    }
    int gethandle() const {    // Гэттэр на 19.09.2023
        return handle;
    }
};
class mobile {
private:
    string model;
    int battery;
    int price;
public:
    void setbattery(int b) {
        if (b >= 0 and b <= 100) {
            battery = b;
        }
        else {
            cout << "No\n";
        }
    }
    int getbattery() const {
        return battery;
    }
    void setprice(int p) {
        if (p >= 0)
        {
            price = p;
        }
        else
        {
            cout << "no\n";
        }
    }
    void setmodel(double m) {
        if (m >= 1 and m <= 15)
        {
            model = m;
        }
        else {
            cout << "No\n";
        }
    }
    string model() const {
        return model;
    }
};

int main()
{
   
}


