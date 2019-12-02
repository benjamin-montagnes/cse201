// one file version

#include <iostream>
#include <string>

class Animal {
public:
  virtual void sound() { /* do nothing */ }
};

class Dog : public Animal {
private:
  std::string name;

public:
  Dog(const std::string &nm) : name(nm) { }

  void sound() {
    std::cout << name << " says \"ouaf! ouaf!\"" << std::endl;
  }
};

class Pig : public Animal {
private:
  std::string name;

public:
  Pig(const std::string &nm) : name(nm) { }

  void sound() {
    std::cout << name << " says \"groin groin!\"" << std::endl;
  }
};

int main()
{
  Animal **farm = new Animal*[3];
  farm[0] = new Dog("Milou");
  farm[1] = new Dog("Pluto");
  farm[2] = new Pig("Pua");

  for (int i = 0; i < 3; i ++)
    farm[i]->sound();
}
