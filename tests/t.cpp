#include "x.hpp"
#include <cassert>
#include <cmath>
#include <cstdlib>
int main(){auto a=x::c::g();assert(a[0]==1e4&&a[46]==12&&a[47]==10);x::c c;c.i0(1.3);c.u(1.3003);c.u(1.299);assert(c.p[47]);assert(x::z({563,-488,100,-86,37,-18,10})==3);x::s s;int p[]={1000,-866,-750,-650,-563,-488,-422,-366,-317,-274,-237,-205,100,-86,-75,-65,-56,-49,-42,-37,-32,-28,14,-12,10};for(std::size_t i=0;i<sizeof(p)/sizeof(*p);++i)s.b[i]={1.2,1.1,p[i]*.00001};x::m m({.00001,5});auto v=m.a(s);assert(!v.empty()&&v[0].k==x::k::L&&v[0].l==3&&v[0].p.back()==10);setenv("MULTI_WAVE_LOG_DIR","/tmp/multi-wave-test",1);x::e e("GBPUSD");auto d=e.D(1,{x::k::L,"",1.3,1.299,1.301,0},1.3,1.30002);assert(d.r=="opened"&&e.V().size()==1&&e.V()[0].x);e.T0(2,1.301,1.30102);assert(!e.V()[0].x);}
