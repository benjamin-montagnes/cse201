#include <iostream>

class A {
public:
  void print() { std::cout << "A" << std::endl; }
};

class B  {
public:
  void print() { std::cout << "B" << std::endl; }
};

int main()
{
  A a;
  a.print();
  B b;
  b.print();

}
