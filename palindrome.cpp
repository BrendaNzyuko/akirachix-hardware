/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    string str;
    int length;
    bool isPalindrome = true;
 
    cout << "Enter a word: ";
 
    getline(cin, str);
 
    length = str.length();
 
    for (int i = 0; i < (length / 2); i++)
    {
        if (str[i] != str[(length - 1) - i])
            isPalindrome = false;
    }
 
    if (isPalindrome == true)
        cout << str << " is a palindrome" << endl;
 
    else
        cout << str << " is not a palindrome" << endl;
 
//new text begins here

    return 0;
}



