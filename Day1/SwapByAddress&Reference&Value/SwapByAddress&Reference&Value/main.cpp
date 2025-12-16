//
//  main.cpp
//  SwapByAddress&Reference&Value
//  Program of three functions of Swapping by Address, value and reference and observe changes
//  Created by Ahmed Tarek on 16/12/2025.
//

#include <iostream>
using namespace std;

// Swap by Value
void SwapV(int left, int right)
{
    int tmp;
    tmp = left;
    left = right;
    right = tmp;
}

// Swap by Reference
void SwapR(int& left, int& right)
{
    int tmp;
    tmp = left;
    left = right;
    right = tmp;
}

// Swap by Address
void SwapA(int* left, int* right)
{
    int tmp;
    tmp = *left;
    *left = *right;
    *right = tmp;
}

int main(void)
{
    int x = 5, y = 6;       // Define variables x & y and assign values
    
    cout<<"Value of X = "<<x<<endl;     // Print the value of x
    cout<<"Value of Y = "<<y<<endl;     // Print the value of y
    
    SwapV(x, y);                        // Swap by Value
    cout<<"After Passing by Value"<<endl;
    cout<<"X = "<<x<<endl;              // Print the value of x after pass by value with no change
    cout<<"Y = "<<y<<endl;              // Print the value of y after pass by value with no change
    SwapR(x, y);                        // Swap by Reference
    cout<<"After Passing by Reference"<<endl;
    cout<<"X = "<<x<<endl;              // Print the value of x after pass by reference that x will be 6
    cout<<"Y = "<<y<<endl;              // Print the value of y after pass by reference that y will be 5
    
    return 0;               // Indicates that the program ends succesfully
    
}
