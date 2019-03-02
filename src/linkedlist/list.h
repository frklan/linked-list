#pragma once

#include "node.h"

template<typename T>
class List {
  public:
    List() : head(nullptr) {}
    ~List();
    void push_front(T data);
    T pop();

    uint64_t size() { return listSize; }
    void empty();
    
  private:
    std::unique_ptr<Node<T>> head;
    uint64_t listSize = 0;
};

template<typename T>
void List<T>::push_front(T data) {
  auto temp = std::make_unique<Node<T>>(data);
  if(head != nullptr) {
    temp->nextNode = std::move(head);
  }
  head = std::move(temp);

  listSize++;
}

template<typename T>
List<T>::~List() {
  empty();
}

template<typename T>
void List<T>::empty() {
  while(head != nullptr) {
    head = std::move(head->nextNode);
  }
  listSize = 0;
}

template<typename T>
T List<T>::pop() {
  if(head == nullptr) {
    return T{};
  }
  auto temp = std::move(head);
  head = std::move(temp->nextNode);

  listSize--;
  return temp->nodeData;
}
/*
  #pragma once
#include <iostream>
#include <memory>

template<typename T>
class Node {
  public:
    Node(T data);
    ~Node();

    Node<T>* next();
    void push_back(T data);

  private:
    std::unique_ptr<Node<T>> nextNode;
    T nodeData;
};

template<typename T>
Node<T>::Node(T data) : nextNode(nullptr), nodeData(data) {
  std::clog << "Node created, data = " << nodeData << '\n';
}

template<typename T>
Node<T>::~Node() {
  std::clog << "Node destroyed, data = " << nodeData << '\n';
}

template<typename T>
 Node<T>* Node<T>::next() {
  return nextNode.get();
}

template<typename T>
void Node<T>::push_back(T data) {
  if(nextNode != nullptr) {
    nextNode->push_back(data);
  } else {
    nextNode = std::make_unique<Node<T>>(data);
  }
}
*/
