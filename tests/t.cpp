#include "x.hpp"
#include <cassert>
#include <cmath>
int main(){auto a=x::c::g();assert(a[0]==1e4&&a[65]>10&&a[66]<10);x::c c;c.i0(1.3);c.u(1.3003);c.u(1.299);assert(c.p[66]);assert(x::z({563,-488,100,-86,37,-18,10})==3);}
