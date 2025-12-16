//
//  main.cpp
//  DynamicAllocation
//  Program to allocate integers, read the size from the user
//  Created by Ahmed Tarek on 16/12/2025.
//

#include <iostream>
using namespace std;

int main(void)
{
    int size;       // Define variable
    
    cout<<"Enter Array Size: ";     // Ask the user to enter array size
    cin>>size;                      // Read the value
    
    int *ptr = new int[size];       // Dynamic Allocate
    
    delete [] ptr;                  // Deallocate

    return 0;                       // Indicates that the program ends succesfully
}
