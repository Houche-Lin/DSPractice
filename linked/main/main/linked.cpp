
#include <iostream>

#include "linked.h"


Linked::Linked(int len) {
    head = new Node();

    Node* node = head;

    for (int i = 0; i < len; i++) {
        node->next = new Node();

        node = node->next;

        node->data = i;
        node->next = nullptr;
    }
} // List::List()


Linked::~Linked() {
    while (head->next != nullptr) {
        Node* dummy = head;

        head = head->next;
        delete dummy;    
    }

    delete head; 
} 

void Linked::append_data(int data) {
    Node* node = head;

    while (node->next != nullptr) {
        node = node->next;  
    }

    node->next = new Node();    
                                
    node->next->data = data;    
    node->next->next = nullptr; 
} 

bool Linked::contain_data(int data) {
    Node* node = head;
    bool found = false;

    while (node->next != nullptr) {
        node = node->next;

        if (node->data == data) {
            found = true;

            break;
        }
    }

    return found;
} 


void Linked::remove_data(int data) {
    Node* node = head;

    while (node->next != nullptr) {
        Node* dummy = node->next;   // 候選節點

        if (dummy->data == data) {  // 找到了？
            node->next = dummy->next;
            delete dummy;   // 釋放記憶體

            break;
        }

        node = node->next;
    }
} // Linked::remove_data()


void Linked::dump_list() {
    std::cout << "  Linked List:" << std::endl;
    std::cout << "    ";

    Node* node = head;

    while (node->next != nullptr) {
        node = node->next;

        std::cout << "[" << node->data << "] -> ";
    }

    std::cout << "$" << std::endl;
} // Linked::dump_list()

// linked.cpp
