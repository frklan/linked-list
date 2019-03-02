#include <iostream>

#include "linkedlist/list.h"
#include "linkedlist/node.h"

int main() {
  std::clog << "--- Linked list ---\n";
  

  List<int> l{};
  
  l.push_front(1);
  l.push_front(2);
  l.push_front(3);
  
  std::clog << l.size() << '\n';

  for(auto i = 0; i < 100000000; i++) {
    l.push_front(i);
  }
  std::clog << l.size() << '\n';
  
  return 0;
}
