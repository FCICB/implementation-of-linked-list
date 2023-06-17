//
// Created by EGYPT on 2023-06-14.
//

#include "doublyLinkedList.h"
#include <iostream>
using namespace std;

template<class T>
doublyLinkedList<T>::doublyLinkedList() {

    head = last = nullptr;
}

template<class T>
doublyLinkedList<T>::doublyLinkedList(T data) {
    Dnode<T>* temp = new Dnode<T>();

    temp->data = data;
    head = temp;
    last = temp;
    temp->next = nullptr;
    temp->previous= nullptr;
}

template<class T>
void doublyLinkedList<T>::addNode(T data)
{



    if(head == nullptr)
    {
        Dnode<T>* temp = new Dnode<T>();
        temp->data = data;
        head = temp;
        last = temp;
        temp->next = nullptr;
        temp->previous= nullptr;
        return;
    }
    Dnode<T>* temp = new Dnode<T>();
    temp->data = data;
    last->next = temp;
    temp->previous = last;
    temp->next = nullptr;
    last =last->next;

}


template<class T>
void doublyLinkedList<T>::addNode(int position, T data) {

    if(head == nullptr)
    {
        Dnode<T>* temp = new Dnode<T>();
        temp->data = data;
        head = temp;
        last = temp;
        temp->next = nullptr;
        temp->previous= nullptr;
        return;
    }
    Dnode<T>* temp = new Dnode<T>();
    temp->data = data;
    int length = listLength();
    if(position == 1)
    {

        temp->previous = nullptr;
        temp->next = head;
        head = temp;
    }
    else if(position == length)addNode(data);

    else
    {
        Dnode<T>* it = head;
       for(int i = 1 ; i < position - 1; i++)it = it->next;
       temp->next = it->next;
       it->next = temp;
       temp->previous = it;

    }
}


template<class T>
void doublyLinkedList<T>::traverseList() {

    Dnode<T>*temp = head;
    while (temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

template<class T>
int doublyLinkedList<T>::listLength() {
    int sum = 0;
    Dnode<T>* temp;
    temp = head;

    while(temp)
    {
        sum++;
        temp = temp->next;
    }
    return sum;
}

template<class T>
T doublyLinkedList<T>::deleteNode() {
    T result;
    if(head->next == nullptr)
    {
        result = head->data;
        delete head;
        head = last = nullptr;
        return result;
    }

    auto * temp = last->previous;
    last->previous= nullptr;
    result = last->data;
    delete last;
    last = temp;
    last->next = nullptr;
    return result;
}

template<class T>
T doublyLinkedList<T>::deleteNode(int position)
{
    T result;
    if(head->next == nullptr)
    {
        result = head->data;
        delete head;
        head = last = nullptr;
        return result;
    }
    int length = listLength();

     Dnode<T>*temp = head;
    if(position == 1)
    {
        result = head->data;
        head = head->next;
        temp->next->previous = nullptr;
        temp->next = nullptr;
        delete temp;
        temp = nullptr;
    }
    else if(position == length)result =deleteNode();
    else
    {
        for(int i = 1 ; i < position ; i++)temp = temp->next;
        result = temp->data;
        temp->previous->next = temp->next;
        temp->next->previous = temp->previous;
        temp->next = temp->previous = nullptr;
        delete temp;
        temp = nullptr;
    }
    return result;
}

template<class T>
bool doublyLinkedList<T>::search(T key) {
   auto *temp = head;
   while(temp)
   {
       if(temp->data == key)return true;
       temp = temp->next;
   }
    return false;
}

template <class T>
bool doublyLinkedList<T>:: isEmpty()
{
    return head == nullptr;
}


