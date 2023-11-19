#include <iostream>
#include <string>
using namespace std;
class Driver {
public:
    string name;

    Driver(const std::string& n) : name(n) {}
};

class Car {
private:
    int age;
    Driver driver;

public:
    Car(int carAge, const Driver& carDriver) : age(carAge), driver(carDriver) {}

    void exchangeDrivers(Car& otherCar) {
        // Exchange drivers between two cars
        swap(driver, otherCar.driver);
    }

    void showDriverNames() const {
        cout << "Car Driver: " << driver.name <<endl;
    }
};

int main() {
    // Example usage:
    // Create drivers
    Driver driver1("Alessia");
    Driver driver2("Bobi");

    // Create cars with drivers
    Car car1(3, driver1);
    Car car2(5, driver2);

    // Show initial driver names
   cout << "Before Exchange:" << endl;
    car1.showDriverNames();
    car2.showDriverNames();

    // Exchange drivers between cars
    car1.exchangeDrivers(car2);

    // Show driver names after exchange
    cout << "\nAfter Exchange:" << endl;
    car1.showDriverNames();
    car2.showDriverNames();

    return 0;
}
