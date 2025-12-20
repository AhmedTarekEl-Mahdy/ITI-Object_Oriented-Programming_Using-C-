//
//  main.cpp
//  Employees
//  Program to Get Data of Employees and Print each Employee's Data
//  Created by Ahmed Tarek on 20/12/2025.
//

#include <iostream>
using namespace std;

// Structure of Employees Data
struct Employee
{
private:
    int id;
    int age;
    float salary;
public:
    // Setter for ID
    void SetId(int _id)
    {
        id = _id;
    }
    // Getter for ID
    int GetId()
    {
        return id;
    }
    // Setter for Age
    void SetAge(int _age)
    {
        age = _age;
    }
    // Getter for Age
    int GetAge()
    {
        return age;
    }
    // Setter for Salary
    void SetSalary(float _salary)
    {
        if (_salary >= 5000 && _salary < 10000)
        {
            salary = _salary;
        }
        else
        {
            salary = 5000;
        }
    }
    // Getter for Salary
    float GetSalary()
    {
        return salary;
    }
    
    // Print Function
    void Print()
    {
        cout<<"Employee ID: "<<id<<endl;
        cout<<"Employee Age: "<<age<<endl;
        cout<<"Employee Salary: "<<salary<<endl;
    }
};

int main(void)
{
    Employee e1;        // Define objects
    
    e1.SetId(1);        // Set the id of e1
    e1.SetAge(28);      // Set the age of e1
    e1.SetSalary(8000); // Set the salary of e1
    e1.Print();         // Print the data of e1
    
    return 0;           // Indicates that the program ends succesfully
}
