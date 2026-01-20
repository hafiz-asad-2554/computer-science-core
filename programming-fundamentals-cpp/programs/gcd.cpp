#include<iostream>
using namespace std;
int main()
{
    int n,m, gcd;
    cout<<"enter first number: ";
    cin>>n;
    cout<<"enter second number: ";
    cin>>m;
    int i = 1;
    
    while(i < m || i < n){
        if(n%i==0 && m%i==0){
            gcd = i;
        }
        i++;
    }
    cout << "gcd is : " << gcd;

    return 0;
}