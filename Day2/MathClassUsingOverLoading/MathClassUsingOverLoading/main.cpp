//
//  main.cpp
//  MathClassUsingOverLoading
//  Program of Math class that add two numbers, and add three numbers using overloading
//  Created by Ahmed Tarek on 22/12/2025.
//

#include <iostream>
using namespace std;

// Math Class
class Math
{
public:
    // Function to add two numbers
    int Add(int x, int y)
    {
        return x + y;
    }
    // Function to add three numbers
    int Add(int x, int y, int z)
    {
        return x + y + z;
    }
};

int main(void)
{
    Math obj;           // Define object obj
    
    cout<<"Add Two Numbers 1,2"<<endl;
    cout<<"Result = "<<obj.Add(1, 2)<<endl;     // Add two values and print the result
    cout<<"==================="<<endl;
    cout<<"Add Three Numbers 1,2,3"<<endl;
    cout<<"Result = "<<obj.Add(1, 2, 3)<<endl;  // Add three values and print the result
    
    return 0;           // Indicates that the program ends succesfully
}
