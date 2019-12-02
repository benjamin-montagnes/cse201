// single file version

#include <iostream>
#include <string>

class Animal {
public:
  virtual std::string getType() = 0;
  virtual std::string getName() { return ""; }
  virtual std::string getNoise() { return ""; }

  void sound() {
    std::string name = getName(), noise = getNoise();
    if (name != "")
      std::cout << name << " the " << getType();
    else
      std::cout << "A " << getType();
    if (noise == "")
      std::cout << " does not make a sound.";
    else
      std::cout << " says \"" << noise << "\"";
    std::cout << std::endl;
  }
};

class Dog : public Animal {
private:
  std::string name;

public:
  Dog(const std::string &nm) : name(nm) { }

  std::string getType() { return "dog"; }
  std::string getName() { return name; }
  std::string getNoise() { return "ouaf! ouaf!"; }
};

class Pig : public Animal {
private:
  std::string name;

public:
  Pig(const std::string &nm) : name(nm) { }

  std::string getType() { return "pig"; }
  std::string getName() { return name; }
  std::string getNoise() { return "groin groin!"; }
};

class Chicken : public Animal {
public:
  std::string getType() { return "chicken"; }
  std::string getNoise() { return "cot cot codet!"; }
};

class Spider : public Animal {
public:
  std::string getType() { return "spider"; }
};

int main()
{
  Animal **farm = new Animal*[4];
  farm[0] = new Dog("Milou");
  farm[1] = new Pig("Pua");
  farm[2] = new Chicken;
  farm[3] = new Spider;

  for (int i = 0; i < 4; i ++)
    farm[i]->sound();
}
