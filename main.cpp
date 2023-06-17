#include <iostream>
#include "linkedList.h"
#include "linkedList.cpp"
#include "doublyLinkedList.h"
#include "doublyLinkedList.cpp"
using namespace std;


int main() {

    cout<<"welcome to our linked list implementation program.\n";

    cout<<"1. try single list.\n2.double list.\n.3.exit\n";
    size_t choice, typeChoice;cin>>choice;
    while (true)
    {
        if(choice == 1)
        {
            cout<<"choose the type of list.\n1.integer.\n2.float.\n";
            cin>>typeChoice;
            if(typeChoice == 1)
            {
                cout<<"entering random number at the end of the list.\n";

                linkedList<int> integerList(4);
                integerList.addNode(1);
                integerList.addNode(7);
                integerList.addNode(10);
                integerList.addNode(140);

                cout<<"the list: ";integerList.traverseList();

                cout<<"entering 2 at the beginning of the list.\n";
                integerList.addNode(1,2);
                cout<<"the list: ";integerList.traverseList();

                cout<<"entering 50 at the 4th position of the list.\n";
                integerList.addNode(4,50);
                cout<<"the list: ";integerList.traverseList();

                cout<<"reversing the list.\n";
                integerList.reverseList();
                cout<<"the list after reverse: ";integerList.traverseList();

                cout<<"deleting the 3rd position.\n";
                integerList.deleteNode(3);
                cout<<"the list: ";integerList.traverseList();

                cout<<"searching for the element 140.\n";
                if(integerList.search(140))cout<<"element found.\n";
                else cout<<"element not found.\n";

            }
            else
            {
                cout<<"entering random number at the end of the list.\n";

                linkedList<float> floatList(7.2);
                floatList.addNode(5.4);
                floatList.addNode(9.8);
                floatList.addNode(10.32);
                floatList.addNode(12.40);

                cout<<"the list: ";floatList.traverseList();

                cout<<"entering 100.2 at the beginning of the list.\n";
                floatList.addNode(1, 100.2);
                cout<<"the list: ";floatList.traverseList();

                cout<<"entering 50.78 at the 4th position of the list.\n";
                floatList.addNode(4, 50.78);
                cout<<"the list: ";floatList.traverseList();

                cout<<"reversing the list.\n";
                floatList.reverseList();
                cout<<"the list after reverse: ";floatList.traverseList();

                cout<<"deleting the 3rd position.\n";
                floatList.deleteNode(3);
                cout<<"the list: ";floatList.traverseList();

                cout<<"searching for the element 11.4 .\n";
                if(floatList.search(11.4))cout << "element found.\n";
                else cout<<"element not found.\n";
            }
        }
        else if(choice == 2)
        {
            cout<<"entering random number at the end of the list.\n";

            doublyLinkedList<int> integerList(4);
            integerList.addNode(1);
            integerList.addNode(7);
            integerList.addNode(10);
            integerList.addNode(140);

            cout<<"the list: ";integerList.traverseList();

            cout<<"entering 2 at the beginning of the list.\n";
            integerList.addNode(1,2);
            cout<<"the list: ";integerList.traverseList();

            cout<<"entering 50 at the 4th position of the list.\n";
            integerList.addNode(4,50);
            cout<<"the list: ";integerList.traverseList();

            cout<<"deleteing the 3rd position.\n";
            integerList.deleteNode(3);
            cout<<"the list: ";integerList.traverseList();

            cout<<"searching for the element 140.\n";
            if(integerList.search(140))cout<<"element found.\n";
            else cout<<"element not found.\n";
        }
        else break;
        cout<<"1. try single list.\n2.double list.\n.3.exit\n";
        cin>>choice;
    }

    return 0;
}

