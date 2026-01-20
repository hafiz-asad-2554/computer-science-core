#include <iostream>
#include "LinkedList.h"
using namespace std;

int main() {
    LinkedList<int> intList;
    intList.insert(10);
    intList.insert(20);
    cout << "Int List: ";
    intList.display();

    LinkedList<string> strList;
    strList.insert("World");
    strList.insert("Hello");
    cout << "String List: ";
    strList.display();

    return 0;
}
