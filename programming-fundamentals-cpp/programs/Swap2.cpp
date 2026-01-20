#include <iostream>
using namespace std;

int main (){
    int a = 4, b = 7;
    
    cout << "The variable without swap: a = " << a << " b = " << b << endl;

    a = a + b;
    b = a - b;
    a = a - b;

    cout << "The variable after Swaping Without using 3rd variable: a = " << a << " b = " << b << endl;
    
    return 0;
    

}