#include <iostream>
using namespace std;

int Omarks(int a){
    do{

    cin >> a;
    if(a <= 100 && a >= 0){
        return a;
    }
    else
        cout << " please input the correct information: ";
    }while(a > 100 || a < 0);
}

int main(){
    int eng = 0, math = 0, comp = 0, urdu = 0, islamiyat = 0;
    cout << "enter the marks you obtained: "<< endl;
    cout << " enter the marks of english: ";
    
    eng = Omarks(eng);
    cout << " enter the marks of math: ";
    
    math = Omarks(urdu);
    cout << " enter the marks of computer: ";
    
    comp = Omarks(comp);
    cout << " enter the marks of urdu: ";
    
    urdu = Omarks(urdu);
    cout << " enter the marks of islamiyat: ";
    
    islamiyat = Omarks(islamiyat);

    int Obtained_marks = eng+urdu+math+comp+islamiyat;
    float  result = (Obtained_marks/500.0)*100;

    if (result >= 90)
    {
        cout << "outstanding ...... you got A+ Grade";

    }else if (result >= 80)
    {
        cout << "Excellent ...... you got A Grade";

    }else if (result >= 70)
    {
        cout << "Good ...... you got B Grade";

    }else if (result >= 60)
    {
        cout << "Fair ...... you got C Grade";

    }else if (result >= 50)
    {
        cout << "Stisfactory ...... you got D Grade";

    }else
    {
        cout << "Fai. ...... you got F Grade";

    }

    return 0;    

}