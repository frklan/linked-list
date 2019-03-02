#pragma once
#include <iostream>
#include <memory>

template<typename T>
struct Node {
    Node(T data) : nextNode(nullptr), nodeData(data) {
      //std::clog << "node created, data = " << nodeData << '\n';
    }

    ~Node() {
      //std::clog << "node destroyed, data = " << nodeData << '\n';
    }

    std::unique_ptr<Node<T>> nextNode;
    T nodeData;
};
