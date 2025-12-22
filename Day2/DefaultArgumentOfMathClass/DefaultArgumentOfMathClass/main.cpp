//
//  main.cpp
//  DefaultArgumentOfMathClass
//  Program to use default arguments in Math Class
//  Created by Ahmed Tarek on 22/12/2025.
//

#include <iostream>
using namespace std;

// Math Class
class Math
{
public:
    // Function to add three values using default arguments
    int Add(int x = 0, int y = 0, int z = 0)
    {
        return x + y + z;
    }
};

int main(void)
{
    Math obj;           // Define Object obj
    
    cout<<"Result of sum three values (1,2,3) = "<<obj.Add(1,2,3)<<endl;    // Add three values and print the result = 6
    cout<<"Result of sum two values (1,2) = "<<obj.Add(1,2)<<endl;      // Add two values and print the result = 3
    cout<<"Result of sum one value (1) = "<<obj.Add(1)<<endl;       // Add one value and print the result = 1
    cout<<"Result of sum no value () = "<<obj.Add()<<endl;          // Add no value and print the result = 0
    
    return 0;       // Indicates that the program ends succesfully
}
