#include <cstdarg>
#include <cstdint>
// #include <cstdlib>
#include <ostream>
// #include <new>

namespace startin
{


struct Triangulation;


extern "C" {

Triangulation *new_triangulation(); 
int destroy(Triangulation *ptr); 

uintptr_t insert_one_pt(Triangulation *ptr, double px, double py, double pz); 
uintptr_t* adjacent_vertices_to_vertex(Triangulation *ptr, unsigned long pointid); 
int remove2(Triangulation *ptr, unsigned long pointid); 
void insert(Triangulation *ptr, int length, double *arr, const char *strategy); 
double interpolate_nn(Triangulation *ptr, double px, double py); 
double interpolate_linear(Triangulation *ptr, double px, double py); 
double interpolate_nni(Triangulation *ptr, double px, double py); 
double interpolate_laplace(Triangulation *ptr, double px, double py); 
int write_obj(Triangulation *ptr, const char *s); 
int write_ply(Triangulation *ptr, const char *s); 
double get_snap_tolerance(Triangulation *ptr); 
double set_snap_tolerance(Triangulation *ptr, double tolerance); 
int printme(Triangulation *ptr);

} // extern "C"

} // namespace