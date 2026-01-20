#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "enter the three numbers:" << endl;
    cout << "enter the first number: ";
    cin >> a;
    cout << "enter the 2nd number: ";
    cin >> b;
    cout << "enter the 3rd number: ";
    cin >> c;
    if (a<b)
    {
        if (a<c)
        {
            cout << "smallest number is: " << a;
        }
        else
        {
            cout << "smallest number is: " << c;
            
        }
        
    }
    else
    {
        if (b<c)
        {
            cout << "smallest number is: " << b;
        }
        else
        {
            cout << "smallest number is: " << c;
            
        }
        
        
    }


    if (a>b)
    {
        if (a>c)
        {
            cout << "Largest number is: " << a;
        }
        else
        {
            cout << "Largest number is: " << c;
            
        }
        
    }
    else
    {
        if (b>c)
        {
            cout << "Largest number is: " << b;
        }
        else
        {
            cout << "Largest number is: " << c;
            
        }
        
        
    }
    

}