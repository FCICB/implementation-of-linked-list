//
// Created by EGYPT on 2023-06-13.
//

#include "linkedList.h"
#include "iostream"
using namespace std;


template <class T>
linkedList<T>:: linkedList()
{
    head= last = nullptr;
}

template <class T>
linkedList<T>:: linkedList(T data)
{
    head = new node<T>();
    head->data = data;
    head->next = nullptr;
    last = head;
}


template <class T>
void linkedList<T>::addNode(T data)
{
    if(head ==  nullptr)
    {
        head = new node<T>();
        head->data = data;
        head->next = nullptr;
        last = head;
        return;
    }
    node<T>* temp;
    temp = new node<T>();
    temp->data = data;
    temp->next = nullptr;
    last->next = temp;
    last = last->next;

}

template <class T>
void linkedList<T>::addNode(int position, T data)
{
    int length = listLength();
    if(head ==  nullptr)
    {
        head = new node<T>();
        head->data = data;
        head->next = nullptr;
        last = head;
        return;
    }
    node<T>* temp;
    temp = new node<T>();
    temp->data = data;
    temp->next = nullptr;
    if(position == 1)
    {
        temp->next = head;
        head = temp;
    }
    else if(position == length)addNode(data);
    else
    {
        node<T>* r = head;
        for(int i = 1 ; i < position-1; i++)r= r->next;
        temp->next = r->next;
        r->next = temp;
    }
}


template <class T>
int linkedList<T>::listLength()
{
    int sum = 0;
    node<T>* temp;
    temp = head;

    while(temp)
    {
        sum++;
        temp = temp->next;
    }
    return sum;
}

template <class T>
void  linkedList<T>:: traverseList()
{
    node<T>* temp;

    temp = head;
    while(temp)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


template <class T>

T linkedList<T>:: deleteNode()
{
    T result;
    if( head->next == nullptr)
    {
        result = head->data;
        delete head;
        last = nullptr;
        head = nullptr;
        return result;
    }
    node<T>* temp;

    temp = head;
    while (temp->next != last)temp = temp->next;
    result = last->data;
    temp->next = nullptr;
    delete last;
    last = nullptr;
    last = temp;
    return result;
}


template <class T>
T  linkedList<T>:: deleteNode(int position)
{
    int length = listLength();
    if(position < 1 || position > length)throw runtime_error("Invalid position please enter valid one.\n");
    if( head->next == nullptr)
    {
        T result = head->data;
        delete head;
        last = nullptr;
        head = nullptr;
        return result;
    }
    if(position == 1)
    {
        node<T>* temp;
        T result = head->data;
        temp = head;
        head = head->next;
        delete temp;
        temp = nullptr;
        return result;
    }
    else if(position == length )deleteNode();
    else
    {
        node<T> *temp, *r;
        r = nullptr;
        temp = head;
        for(int i = 1 ; i < position ; i++)
        {
            r =temp;
            temp = temp->next;
        }

        T result = temp->data;
        r->next = temp->next;
        delete temp;
        temp = nullptr;
        return result;




    }
    return 0;
}

template <class T>
bool linkedList<T>:: search(int key)
{
    node<T>* temp = head;

    while(temp)
    {
        if(temp->data == key)return true;
        temp = temp->next;
    }
    return false;
}


template <class T>
void linkedList<T>:: reverseList()
{
    node<T>* r = nullptr , *p = nullptr,*temp = head;

    head = last;
    last = temp;

    p = last;

    while(p)
    {
        temp = p->next;
        p->next = r;
        r = p;
        p = temp;


    }
}


template <class T>
bool linkedList<T>:: isEmpty()
{
    return head == nullptr;
}


template <class T>
void linkedList<T>:: destroyList()
{
    node<T>* temp = head;
    while(head != nullptr)
    {
        deleteNode();
    }
}

template <class T>
linkedList<T>::~linkedList()
{
    delete head;
    delete last;
}