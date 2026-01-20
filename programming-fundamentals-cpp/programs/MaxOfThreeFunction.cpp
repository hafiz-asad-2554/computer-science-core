// Name: HAFIZ MUHAMMAD ASAD MUSTAFA
// Father Name: Ghulam Mustafa
// Roll No: S23NDOCS1M01042
// Phone No: 03032554632
// Address: Dunga Bunga
// Department: Computer Science
// Semester: 1st
// University: The Islamia University of Bahawalpur
// Campus: Bahawalnagar

#include <iostream>
using namespace std;

int maxOfThree(int a, int b, int c)
{
    int max = a;
    if(b > max)
        max = b;
    if(c > max)
        max = c;
    return max;
}

int main()
{
    int num1, num2, num3, result;
    
    cout << "========================================" << endl;
    cout << "         Maximum of Three Function       " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter three numbers: ";
    cin >> num1 >> num2 >> num3;
    
    result = maxOfThree(num1, num2, num3);
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "First Number: " << num1 << endl;
    cout << "Second Number: " << num2 << endl;
    cout << "Third Number: " << num3 << endl;
    cout << "Maximum: " << result << endl;
    cout << "========================================" << endl;
    
    return 0;
}