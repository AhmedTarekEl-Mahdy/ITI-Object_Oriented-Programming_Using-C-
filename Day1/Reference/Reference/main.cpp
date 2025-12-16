//
//  main.cpp
//  Reference
//  Program to use Reference and observe changes
//  Created by Ahmed Tarek on 16/12/2025.
//

#include <iostream>
using namespace std;

int main(void)
{
    int x = 10;         // Define variable x   // Stack  x|10|0x10
    int& y = x;         // Define Reference    // Stack y,x|10|0x10
    
    cout<<"X = "<<x<<endl;      // Print the value of x
    cout<<"Y = "<<y<<endl;      // Print the value of y
    cout<<"Address of X = "<<&x<<endl;      // Print the Address of x
    cout<<"Address of Y = "<<&y<<endl;      // Print the Address of y
    
    y = 1000;                   // Change the value of y to 1000
    cout<<"X = "<<x<<" After assign new value to y 1000"<<endl;
    
    return 0;                   // Indicates that the program ends succesfully
}
