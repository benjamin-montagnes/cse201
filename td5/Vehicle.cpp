#include <iostream>

class Vehicle {
 protected:
  double x;

 public:
  Vehicle() {
    std::cout << "Creating a vehicle." << std::endl;
    x = 0;
  };

  void printPosition() {
    std::cout << "Position: " << x << std::endl;
  }

  virtual void move(double seconds) {
    std::cout << "Move vehicle..." << std::endl;
    printPosition();
  }

  ~Vehicle() { std::cout << "Destroying a vehicle" << std::endl; }
};

class Car: public Vehicle {
 protected:
  bool forward;

 public:
  Car() {
    std::cout << "Creating a car." << std::endl;
    forward = true;
  };

  virtual void move(double seconds) {
    std::cout << "Move car..." << std::endl;
    int sign = forward ? 1 : -1;
    x = x + seconds * sign;
    printPosition();
  }

  ~Car() { std::cout << "Destroying a Car" << std::endl; }
};

class RacingCar: public Car {
public:
  RacingCar() {
    std::cout << "Creating a racing car." << std::endl;
  };

  virtual void move(double seconds) {
    std::cout << "Move racing car..." << std::endl;
    int sign = forward ? 1 : -1;
    x = x + seconds * 2 * sign;
    printPosition();
  }
};

void simulate(Vehicle& v1, Vehicle& v2, Vehicle& v3,
              const double time_horizon) {
  for (double i = 0; i <= time_horizon; i++) {
    v1.move(i);
    v2.move(i);
    v3.move(i);
  }
}

int main() {
  Vehicle vehicle = Vehicle();
  Car car = Car();
  RacingCar racing_car = RacingCar();

  simulate(vehicle, car, racing_car, 5);

  std::cout << "Final Position for vehicle, car, and racing car: "
            << std::endl;

  vehicle.printPosition();
  car.printPosition();
  racing_car.printPosition();
}
