//
// Created by EGYPT on 2023-06-14.
//

#ifndef MAIN_CPP_DOUBLYLINKEDLIST_H
#define MAIN_CPP_DOUBLYLINKEDLIST_H

template<class T>
struct Dnode{
    T data;
    Dnode* previous, *next;
};

template <class T>

class doublyLinkedList {
private:
    Dnode<T>*head , *last;
public:
    explicit doublyLinkedList();
    explicit doublyLinkedList(T data);
    void addNode(T data);
    void addNode(int position, T data);
    void traverseList();
    int listLength();
    T deleteNode();
    T deleteNode(int position);
    bool search(T key);
    bool isEmpty();


};




#endif //MAIN_CPP_DOUBLYLINKEDLIST_H
