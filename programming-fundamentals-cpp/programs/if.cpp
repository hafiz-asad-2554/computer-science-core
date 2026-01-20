#include <iostream>
using namespace std;
int main()
{
    int marks;
    cin >> marks;
    if (marks > 90){
        cout << "exelent";
    }else if(marks > 80){
        cout << "good";
    }
    else if (marks > 70 ){
        cout << "not bad";

    }
    else {
        cout << "fail";
    }


    return 0;
}