#include <vector>
#include "startin.h"

class DT
{
public:
  DT();
  ~DT();

  void                   printme();
  std::vector<uintptr_t> adjacent_vertices_to_vertex(uintptr_t vi); 
  uintptr_t              insert_one_pt(double px, double py, double pz);
  uintptr_t              number_of_vertices();
  uintptr_t              number_of_triangles();


protected:
  startin::Triangulation* _t;

};

