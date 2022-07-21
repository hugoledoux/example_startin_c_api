#include <string>
#include <iostream>
#include <fstream>

#include "Triangulation.h"

Triangulation::Triangulation() {
  _t = startin::new_triangulation();
}

Triangulation::~Triangulation() {
}

uintptr_t Triangulation::insert_one_pt(double px, double py, double pz){
  return startin::insert_one_pt(_t, px, py, pz);
}

std::vector<uintptr_t> Triangulation::adjacent_vertices_to_vertex(uintptr_t vi) {
  std::vector<uintptr_t> adjs;
  uintptr_t* re = startin::adjacent_vertices_to_vertex(_t, vi);
  if (re[0] > 0) {
    for (int i = 1; i <= re[0]; i++)
    {
      adjs.push_back(re[i]);
    }
  }
  return adjs;
}

uintptr_t Triangulation::number_of_vertices() {
  return 8;
}

uintptr_t Triangulation::number_of_triangles(){
  return 9;
}

void Triangulation::printme() {
  startin::printme(_t);
}
