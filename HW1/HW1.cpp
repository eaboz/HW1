// HW1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "HW1.h"

int main()
{
    read_file();
    
    while (x != 5) {
        x = 0;
        cout << "Please select action:\n\n";
        cout << "1- Check if integer is present in array:\n\n2- Modify an index value:\n\n3- Add a new integer to the end of the array:\n\n4- Remove an index or replace it with 0:\n\n5- End:\n\n";
        
        cin >> x;

        // all the funtion calls for the various options
        if (x == 1) {
            search_input();
            
        }
        else if (x == 2) {
            change();
            
        }
        else if (x == 3) {
            add();
        }
        else if (x == 4) {
            del();
        }
        else {

        }
       
    }



	
    
    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
