#include <iostream>
#include "linkedList.h"
#include "linkedList.cpp"
#include "doublyLinkedList.h"
#include "doublyLinkedList.cpp"
using namespace std;


int main() {

    doublyLinkedList<int>x(20);
    x.addNode(5);
    x.addNode(7);
    x.addNode(10);
    x.addNode(45);
    x.addNode(1,1);
    x.addNode(5,22);
    x.addNode(200);
    x.traverseList();
    x.deleteNode(5);
    x.traverseList();

    if(x.search(10))cout<<"Item found.\n";
    else cout<<"Item not found!\n";
    return 0;
}



/*int length;

    linkedList<int> l(20);

    l.addNode(45);
    l.addNode(57);
    l.addNode(42);
    l.addNode(89);
    l.addNode(22);

    cout<<"before reversing the list.\n";

    l.traverseList();

    cout<<"after reversing the list.\n";
    l.reverseList();
    l.traverseList();

     if(l.search(30))cout<<"item found.\n";
     else cout<<"item not found!\n";

       l.traverseList();
       l.addNode(3,221);
       l.addNode(1,1);
       length = l.listLength();
       l.addNode(length,1000);
       l.traverseList();
       l.destroyList();

       if(l.isEmpty())cout<<"list is empty"<<endl;
       else cout<<"list is not empty"<<endl;


       l.addNode(9);
       l.addNode(10);
       l.addNode(20);
       l.addNode(100);
       l.addNode(500);
       l.addNode(34);
       l.addNode(79);
       l.traverseList();
       cout<<"the number of elements in the list: "<<l.listLength()<<endl;


       cout<<"the deleted node equal: "<<l.deleteNode(5)<<endl;
       cout<<"the deleted node equal: "<<l.deleteNode(3)<<endl;
       cout<<"the number of elements in the list: "<<l.listLength()<<endl;
       l.traverseList();*/