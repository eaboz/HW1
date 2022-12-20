#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <array>
using namespace std;

int arr[120];
int n = 120;
int val;
int x;
//imports the values from the txt file into an array
void read_file() {
    ifstream infile("input.txt");
    for (int i = 0; i <= 100; i++)
        infile >> arr[i];
    infile.close();
}
//searches the array for the desired value
void search(int arr[], int size, int value)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == value)
        {
            cout << "Value present at index no: " << i + 1 << "\n\n";
            return;
        }
    }
    cout << "Value does not exist" << endl;
}

void search_input() {
    cout << "Enter value to search:\n";
    cin >> val;
    search(arr, n, val);
}
//changes the desired index value to a selected new value
void change() {
    int r = 0;
    int p = 0;
    cout << "What index do you wish to alter?\n";
    cin >> r;
    cout << "What do you want to change the value to?\n";
    cin >> p;
    cout << "Index " << r << " was " << arr[r] << "\n";
    arr[r] = p;
    cout << "Index " << r << " is now " << arr[r] << "\n\n";
}
//adds a value to the array
void add() {
    int a = 0;
    cout << "Enter the value to add:\n";
    cin >> a;
    int len = sizeof(arr)/sizeof(arr[0]);
    arr[len - 1] = a;
    cout << a << " added to array\n\n";
}
// sets a desired index value to 0
void del() {
    int clr = 0;
    cout << "Enter the index to be cleared:\n\n";
    cin >> clr;
    arr[clr] = 0;
    cout << "Index " << clr << " now set to 0\n\n";

}
