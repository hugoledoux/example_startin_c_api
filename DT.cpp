#include <string>
#include <iostream>
#include <fstream>

#include "DT.h"

DT::DT() {
  _t = startin::new_triangulation();
}

DT::~DT() {
}

uintptr_t DT::insert_one_pt(double px, double py, double pz){
  return startin::insert_one_pt(_t, px, py, pz);
}

std::vector<uintptr_t> DT::adjacent_vertices_to_vertex(uintptr_t vi) {
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

uintptr_t DT::number_of_vertices() {
  return 8;
}

uintptr_t DT::number_of_triangles(){
  return 9;
}

void DT::printme() {
  startin::printme(_t);
}
