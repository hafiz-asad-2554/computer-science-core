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
#include <string>
using namespace std;

int main()
{
    string sentence;
    int wordCount = 0, i;
    bool inWord = false;
    
    cout << "========================================" << endl;
    cout << "           Word Counter                 " << endl;
    cout << "========================================" << endl;
    
    cout << "Enter a sentence: ";
    getline(cin, sentence);
    
    // Count words manually
    for(i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n')
        {
            if(!inWord)
            {
                wordCount++;
                inWord = true;
            }
        }
        else
        {
            inWord = false;
        }
    }
    
    cout << "\n========================================" << endl;
    cout << "Input sentence: " << sentence << endl;
    cout << "Number of words: " << wordCount << endl;
    cout << "Number of characters: " << sentence.length() << endl;
    
    // Count characters without spaces
    int charCount = 0;
    for(i = 0; i < sentence.length(); i++)
    {
        if(sentence[i] != ' ' && sentence[i] != '\t' && sentence[i] != '\n')
        {
            charCount++;
        }
    }
    cout << "Characters without spaces: " << charCount << endl;
    
    cout << "========================================" << endl;
    
    return 0;
}