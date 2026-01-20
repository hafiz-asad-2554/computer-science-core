#include <iostream>
using namespace std;

int main(){
    int num = 12345, rem = 0, sum = 0, product = 1;

    while (num > 0)
    {
        rem = num % 10;
        sum = sum + rem;
        product = product * rem;
        num = num / 10;

    }
    
    cout << "the sum of digits of number is: " << sum << endl;
    cout << "the product of digits of number is: " << product << endl;
    return 0;
    
}