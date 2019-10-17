#include <iostream>

class Vehicle {
 private:
double x;

 public:

  Vehicle() {
    std::cout << "Creating a vehicle." << std::endl;
    x = 0;
  };

  void printPosition() {
    std::cout << "Position: " << x << std::endl;
  }

  void move(double seconds) {
    std::cout << "Move vehicle..." << std::endl;
    printPosition();
  }

  ~Vehicle() { std::cout << "Destroying a vehicle" << std::endl; }
};

class Car: public Vehicle {
private:
  double x;
 protected:
  bool forward;

 public:
  Car() {
    std::cout << "Creating a car." << std::endl;
    forward = true;
  };

  void move(double seconds) {
    std::cout << "Move car..." << std::endl;
    int sign = forward ? 1 : -1;
    x = x + seconds * sign;
    printPosition();
  }

  ~Car() { std::cout << "Destroying a Car" << std::endl; }
};

class RacingCar: public Car {
private:
  double x;
public:
  RacingCar() {
    std::cout << "Creating a racing car." << std::endl;
  };

  void move(double seconds) {
    std::cout << "Move racing car..." << std::endl;
    int sign = forward ? 1 : -1;
    x = x + seconds * 2 * sign;
    printPosition();
  }
};

int main() {
  Car car = Car();
  car.printPosition();
}
