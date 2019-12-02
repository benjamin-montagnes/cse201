#include <iostream>
#include <cstdlib>
#include <ctime>

#include "LinkedList.hpp"

int main()
{
  std::srand(std::time(NULL));

  LinkedList* l = new LinkedList;

  for (int i = 0; i < 100; i ++)
    l->append(std::rand() % 10);

  l->display();

  LinkedList *ll = l->filterSmaller(5);

  delete l;

  ll->display();

  delete ll;

  return 0;
}
