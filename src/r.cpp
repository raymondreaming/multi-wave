#include "x.hpp"
#include <charconv>
#include <fstream>
#include <iostream>
int main(int n,char**v){if(n!=2)return 64;std::ifstream f(v[1]);std::string s;double p{};x::c c;std::uint64_t k{};while(std::getline(f,s)){auto i=s.rfind(',');auto[a,e]=std::from_chars(s.data()+(i==s.npos?0:i+1),s.data()+s.size(),p);if(e!=std::errc{})continue;if(c.o)c.u(p);else c.i0(p);++k;}std::cout<<"rows="<<k<<" last_price="<<c.l<<'\n';}
