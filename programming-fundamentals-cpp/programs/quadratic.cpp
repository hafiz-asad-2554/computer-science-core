#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int a, b, c;
    cout << "inter the value of a: ";
    cin >> a ;
    cout << "inter the value of b: ";
    cin >> b ;
    cout << "inter the value of c: ";
    cin >> c ;

    float disc = sqrt((b*b)-(4*a*c));
    float x1 = (-b+disc)/2*a, x2 = (-b-disc)/2*a;

    cout << "The value of x1 : " << x1 << endl;
    cout << "The value of x2 : " << x2 << endl;
   

    
}