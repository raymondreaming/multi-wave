#include "x.hpp"
#include <iostream>
int main(int n,char**v){if(n!=3)return 64;try{auto a=x::r(v[1]);x::c c;x::w(v[2],x::r(a,c));std::cout<<a.size()<<'\n';}catch(...){return 1;}}
