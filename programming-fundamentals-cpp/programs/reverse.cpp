#include <iostream>
using namespace std;

int main(){
    int num = 12345, rev = 0, rem = 0;

    cout << "the five digit number is: " << 12345 << endl;

   while(num > 0){
        rem = num % 10;
        num = num / 10;
        rev = (rev * 10) + rem;

    }

    cout << "the reverse of five digit number of is: " << rev;


}