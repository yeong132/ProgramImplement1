#include <iostream>
#include <string>

using namespace std;

class Vehicle {
protected:
    string color;
    int speed;

public:
    Vehicle(string c, int s) : color(c), speed(s) {}

    void move() {
        cout << "The vehicle is moving at " << speed << " km/h." << endl;
    }

    void setColor(string c) {
        color = c;
    }

    string getColor() {
        return color;
    }
};

// 파생 클래스 1: 자전거
class Bicycle : public Vehicle {
private:
    bool hasBasket;

public:
    Bicycle(string c, int s, bool basket) : Vehicle(c, s), hasBasket(basket) {}

    void ringBell() {
        cout << "Bicycle bell: Ring Ring!" << endl;
    }

};

// 파생 클래스 2: 트럭
class Truck : public Vehicle {
private:
    int cargoCapacity;

public:
    Truck(string c, int s, int capacity)
        : Vehicle(c, s), cargoCapacity(capacity) {
    }

    void loadCargo() {
        cout << "Truck loading cargo. Capacity: " << cargoCapacity << " tons."
            << endl;
    }
};

int main()
{
    Bicycle b("Yellow", 30, true);
    Truck t("Blue", 40, 95);

    b.ringBell();
    t.loadCargo();

    return 0;
}