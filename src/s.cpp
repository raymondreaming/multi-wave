#include "x.hpp"
#include <arpa/inet.h>
#include <charconv>
#include <cstdlib>
#include <iostream>
#include <netinet/in.h>
#include <sys/socket.h>
#include <unistd.h>
namespace{void w(int x,int c,std::string const&b){std::string h="HTTP/1.1 "+std::string(c==200?"200 OK":"400 Bad Request")+"\r\nContent-Type: application/json\r\nContent-Length: "+std::to_string(b.size())+"\r\nConnection: close\r\n\r\n"+b;::send(x,h.data(),h.size(),0);}bool q(std::string const&s,char const*k,double&v){auto x=s.find(std::string(k)+"=");if(x==s.npos)return{};x+=std::char_traits<char>::length(k)+1;auto e=s.find_first_of(" &\r\n",x);return std::from_chars(s.data()+x,s.data()+(e==s.npos?s.size():e),v).ec==std::errc{};}}
int main(int n,char**v){x::e e(n>1?v[1]:"GBPUSD");if(auto p=std::getenv("MULTI_WAVE_CANDLES"))e.b(p);int s=::socket(AF_INET,SOCK_STREAM,0),o=1;::setsockopt(s,SOL_SOCKET,SO_REUSEADDR,&o,sizeof o);sockaddr_in a{};a.sin_family=AF_INET;a.sin_addr.s_addr=htonl(INADDR_LOOPBACK);a.sin_port=htons((std::uint16_t)(std::getenv("MULTI_WAVE_PORT")?std::atoi(std::getenv("MULTI_WAVE_PORT")):8765));if(::bind(s,(sockaddr*)&a,sizeof a)||::listen(s,32))return 1;for(;;){int c=::accept(s,0,0);char b[4096]{};auto z=::recv(c,b,sizeof b-1,0);std::string r(b,z>0?(std::size_t)z:0);if(r.rfind("GET /health",0)==0)w(c,200,"{\"status\":\"ok\"}");else if(r.rfind("GET /api/status",0)==0)w(c,200,e.g());else{double b{},a{};if(q(r,"bid",b)&&q(r,"ask",a)){auto j=e.u(0,b,a);w(c,200,"{\"reason\":\""+j.r+"\"}");}else w(c,400,"{\"error\":\"bad\"}");}::close(c);}}
