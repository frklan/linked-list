#include <iostream>
#include <vector>
#include <string>

#include <catch2/catch.hpp>

#include "list.h"

TEST_CASE("List size", "[linked list size]") {
  List<int> l;
  REQUIRE(l.size() == 0);
  
  SECTION("list grows as we add items") {
    l.push_front(1);
    l.push_front(1);
    l.push_front(1);
    REQUIRE(l.size() == 3);
  }

  SECTION("empty() clears the list") {
    l.empty();
    REQUIRE(l.size() == 0);
  }
}

TEST_CASE("List types", "[linked list types]") {
  SECTION("int") {
    List<int> l;
    REQUIRE(l.size() == 0);
    l.push_front(1);
    l.push_front(2);
    REQUIRE(l.size() == 2);
  }
  SECTION("std::string") {
    List<std::string> s;
    REQUIRE(s.size() == 0);
    s.push_front("hello");
    s.push_front("world");
    REQUIRE(s.size() == 2);

    auto size = s.size();
    for(uint64_t i = 0; i < size; i++) {
      auto e = s.pop();
      REQUIRE(typeid(e) == typeid(std::string));
      std::clog << e << ' ' << i << '\n';
    }
    REQUIRE(s.size() == 0);
  }

  SECTION( "struct") {
    struct Custom{
      int i;
      std::string s;
    };
    List<Custom> ss;
    REQUIRE(ss.size() == 0);
    ss.push_front({1, "hello world"});
    ss.push_front({2, "another string"});
    REQUIRE(ss.size() == 2);
    ss.empty();
    REQUIRE(ss.size() == 0);
  }
}

// TEST_CASE( "iterate list", "[iterate list]" ) {
//   List<int> l;
//   for(int i = 0; i < 10; i++){
//     l.push_front(i);
//   }

//   REQUIRE(l.size() == 10);

//   for(auto e : l) {
//     auto i = 0;
//     REQUIRE(e == i);
//     i++;
//   }
// }

TEST_CASE( "Pop elements", "[pop list]" ) {
  List<int> l;
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  l.push_front(4);
  REQUIRE(l.size() == 4);

  SECTION("pop element") {
    auto e = l.pop();
    REQUIRE(e == 4);
    REQUIRE(l.size() == 3);
  }
}
