//
//  main.cpp
//  ReadAgeAndName
//  Program to Read Age and Name from the user and print them.
//  Created by Ahmed Tarek on 16/12/2025.
//

#include <iostream>
using namespace std;

int main(void)
{
    int age;        // Define variable age
    char name[15];  // Define variable name
    
    cout<<"Please Enter your Age: ";        // Ask the user to enter age
    cin>>age;                               // Read the value and save in age variable
    cout<<"Please Enter you Name: ";        // Ask the user to enter name
    cin>>name;                              // Read the value and save in name variable
    
    cout<<"Your Age is "<<age<<endl;        // Print the age enterd by the user
    cout<<"Your Name is "<<name<<endl;      // Print the name entered by the user
    return 0;
}
