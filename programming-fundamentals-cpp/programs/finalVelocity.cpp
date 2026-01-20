#include <iostream>
using namespace std;

int main(){
    float vf, vi, a, t;
    cout << " enter the intial velocity: ";
    cin >> vi;
    cout << "enter the acceleration: ";
    cin >> a;
    cout << "enter the time: ";
    cin >> t;
    vf = vi + (a*t);
    cout << "the final velocity is: " << vf;
    return 0;
}