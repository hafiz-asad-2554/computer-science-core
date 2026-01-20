#include <iostream>
using namespace std;

int main (){
    int a = 4, b = 7;
    
    cout << "The variable without swap: a = " << a << " b = " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "The variable after Swaping With using 3rd variable: a = " << a << " b = " << b << endl;
    
    return 0;
    

}