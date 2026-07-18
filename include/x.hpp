#pragma once
#include <array>
#include <cstdint>
#include <filesystem>
#include <optional>
#include <string>
#include <unordered_set>
#include <vector>
namespace x {
constexpr std::size_t n=67; enum class d:std::int8_t{D=-1,U=1}; struct i{double p=.00001;std::uint8_t q=5;}; struct b{double h{},l{},v{};}; struct f{double p{},v{},a{},e{};d z=d::U;}; struct p{std::size_t x{};d z=d::U;double a{},c{};}; struct c{ i q;std::array<b,n>b{};std::array<f,n>f{};std::array<std::optional<p>,n>p{};bool o{};double l{};std::uint64_t k{}; explicit c(i q={})noexcept:q(q){};static constexpr std::array<double,n>g()noexcept{std::array<double,n>a{};double v=1e4;for(auto&x:a){x=v;v*=.9;}return a;}void i0(double)noexcept;bool u(double)noexcept;};
struct a{std::int64_t t{};double o{},h{},l{},c{};};struct s{std::int64_t t{};double p{};std::array<b,n>b{};};i q(const std::string&)noexcept;std::vector<a>r(const std::filesystem::path&);std::vector<s>r(std::vector<a>const&,c&);void w(const std::filesystem::path&,std::vector<s>const&);
enum class k:std::uint8_t{A,L,S};struct j{k k=k::A;std::string r;double e{},s{},t{};std::size_t x{};};struct h{std::string i,l; k d=k::A;double e{},s{},t{},o{},m{};std::int64_t a{},c{};std::uint64_t k{};bool x{};};std::uint32_t z(const std::vector<double>&)noexcept;class m{ i q;std::uint64_t k{};struct{d z=d::U;double h{},l{},p{};bool o{};}a;public:explicit m(i q):q(q){}j u(s const&);};class e{std::string p;i q;c c0;m m0;bool o{};double l{},B=1e4,R=1e3,X=8;std::uint64_t N{},Q{},S{},C{};std::filesystem::path P;std::vector<h>v;std::unordered_set<std::string>z;void L(char const*,std::string const&);void T(std::int64_t,double,double);j O(std::int64_t,j,double,double);public:e(std::string);bool b(const std::filesystem::path&);j u(std::int64_t,double,double);std::string g()const;std::vector<h>const& V()const{return v;}};
}
