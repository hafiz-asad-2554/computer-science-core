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

int main()
{
    int arr[10], size, sum = 0;
    float average;
    
    cout << "========================================" << endl;
    cout << "         Array Sum & Average            " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter size of array (max 10): ";
    cin >> size;
    
    if(size > 10)
    {
        cout << "Size cannot be greater than 10!" << endl;
        return 0;
    }
    
    cout << "Enter " << size << " elements: ";
    for(int i = 0; i < size; i++)
    {
        cin >> arr[i];
        sum += arr[i];
    }
    
    average = (float)sum / size;
    
    cout << "\n========================================" << endl;
    cout << "              RESULTS                   " << endl;
    cout << "========================================" << endl;
    cout << "Array elements: ";
    for(int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sum: " << sum << endl;
    cout << "Average: " << average << endl;
    cout << "========================================" << endl;
    
    return 0;
}