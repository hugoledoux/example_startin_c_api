#include <iostream>
#include <fstream>

#include "Triangulation.h"


int main()
{
  Triangulation mydt = Triangulation();
  srand (time(NULL));
  for (int i = 0; i < 50; ++i) {
    double x = rand() % 100;
    double y = rand() % 100;
    double z = rand() % 100;
    mydt.insert_one_pt(x, y, z);
  }

  std::vector<uintptr_t> re = mydt.adjacent_vertices_to_vertex(132);
  std::cout << "adjs[" << re.size() << "]: ";
  for (auto each: re) {
    std::cout << each << "-";
  }
  std::cout << std::endl;

  mydt.printme();

  return 0;
}
