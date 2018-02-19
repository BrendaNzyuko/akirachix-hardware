/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    cout<<"Enter word to check \n";
    char word[20];
    
    cin>> word;
    cout << word; cout << "\n";
    int array_size, array_size1;    
    array_size = strlen(word);
    cout << "Size: "; cout << array_size; cout << "\n";
    for(int i = 0; i < (array_size); i++) {
        if(word[i] != word[array_size - (i+1)]) {
            cout << word; cout << " is NOT a palindrome! \n";
            return 0;
        }
    }
    cout << word; cout << " is a palindrome!";

    return 0;
}