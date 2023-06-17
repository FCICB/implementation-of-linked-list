//
// Created by EGYPT on 2023-06-13.
//

#ifndef MAIN_CPP_LINKEDLIST_H
#define MAIN_CPP_LINKEDLIST_H

template <class T>
struct node
{
    T data;
    node* next;
};

template <class T>
class linkedList {
private:
    node<T>* last;
    node<T>* head;

public:
    explicit linkedList();
    explicit linkedList(T data);
    void addNode(T data);
    void addNode(int position, T data);
    int listLength();
    void traverseList();
    T deleteNode();
    T deleteNode(int position);
    bool search(int key);
    void reverseList();
    bool isEmpty();
    void destroyList();
    ~linkedList();

};



#endif //MAIN_CPP_LINKEDLIST_H
