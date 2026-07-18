#pragma once
#include <array>
#include <cstdint>
#include <filesystem>
#include <optional>
#include <string>
#include <unordered_set>
#include <vector>
namespace x {
constexpr std::size_t n=48; enum class d:std::int8_t{D=-1,U=1}; struct i{double p=.00001;std::uint8_t q=5;}; struct b{double h{},l{},v{};}; struct f{double p{},v{},a{},e{};d z=d::U;}; struct p{std::size_t x{};d z=d::U;double a{},c{};}; struct c{ i q;std::array<b,n>b{};std::array<f,n>f{};std::array<std::optional<p>,n>p{};bool o{};double l{};std::uint64_t k{}; explicit c(i q={})noexcept:q(q){};static constexpr std::array<double,n>g()noexcept{return {10000,8660,7506,6503,5637,4880,4227,3664,3173,2748,2379,2059,1783,1544,1338,1159,1000,866,750,650,563,488,422,366,317,274,237,205,178,154,133,115,100,86,75,65,56,49,42,37,32,28,24,21,18,14,12,10};}void i0(double)noexcept;bool u(double)noexcept;};
struct a{std::int64_t t{};double o{},h{},l{},c{};};struct s{std::int64_t t{};double p{};std::array<b,n>b{};};i q(const std::string&)noexcept;std::vector<a>r(const std::filesystem::path&);std::vector<s>r(std::vector<a>const&,c&);void w(const std::filesystem::path&,std::vector<s>const&);
enum class k:std::uint8_t{A,L,S};struct j{k k=k::A;std::string r;double e{},s{},t{};std::size_t x{};std::vector<int>p;unsigned l{};};struct h{std::string i,l; k d=k::A;double e{},s{},t{},o{},m{};std::int64_t a{},c{};std::uint64_t k{};bool x{};};std::uint32_t z(const std::vector<double>&)noexcept;class m{ i q;public:explicit m(i q):q(q){}std::vector<j>a(s const&)const;j u(s const&)const;};class e{std::string p;i q;c c0;m m0;bool o{};double l{},B=1e4,R=1e3,X=8;std::uint64_t N{},Q{},S{},C{};std::filesystem::path P;std::vector<h>v;std::unordered_set<std::string>z;void L(char const*,std::string const&);void T(std::int64_t,double,double);j O(std::int64_t,j,double,double);public:e(std::string);bool b(const std::filesystem::path&);j u(std::int64_t,double,double);j D(std::int64_t t,j v,double b,double a){return O(t,std::move(v),b,a);}void T0(std::int64_t t,double b,double a){T(t,b,a);}std::string g()const;std::vector<h>const& V()const{return v;}};
}
