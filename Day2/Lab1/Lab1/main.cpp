//
//  main.cpp
//  Lab1
//  Program of Class Complex, private fields, setter/getter, 3 constructors with cout<<"ctor called"<<endl; , destructor, print function, member add function, standalone function to add complex, remember to use this->, function to initialize [overloading].
//  Created by Ahmed Tarek on 22/12/2025.
//

#include <iostream>
using namespace std;

// Class Complex
class Complex
{
    // Private field for variables
private:
    int real;
    int img;
    // Public field for functions and setter/getter
public:
    // Setter for Real value
    void SetReal(int _real)
    {
        this->real = _real;
    }
    // Getter for Real value
    int GetReal()
    {
        return this->real;
    }
    // Setter for Imaginary value
    void SetImg(int _img)
    {
        this->img = _img;
    }
    // Getter for Imaginary value
    int GetImg()
    {
        return this->img;
    }
    // Constructor-1
    Complex()
    {
        real = 3;
        img = 4;
        cout<<"ctor called"<<endl;
    }
    // Constructor-2
    Complex(int _real, int _img)
    {
        this->real = _real;
        this->img = _img;
        cout<<"ctor called"<<endl;
    }
    // Constructor-3
    Complex(int _num)
    {
        this->real = this->img = _num;
        cout<<"ctor called"<<endl;
    }
    // Destructor
    ~Complex()
    {
        cout<<"dest called"<<endl;
    }
    // Print function for Complex number
    void PrintComplex()
    {
        cout<<"================="<<endl;
        
        if (real < 0)
        {
            if (img < 0)
            {
                if (img == -1)
                {
                    cout<<"Complex = "<<real<<" - i";
                }
                else if (img != -1)
                {
                    cout<<"Complex = "<<real<<" - "<<(img * -1);
                }
            }
            else if (img == 0)
            {
                cout<<"Complex = "<<real;
            }
            else if (img > 0)
            {
                if (img == 1)
                {
                    cout<<"Complex = "<<real<<" + i";
                }
                else if (img != 1)
                {
                    cout<<"Complex = "<<real<<" + "<<img;
                }
            }
        }
        else if (real == 0)
        {
            if (img < 0)
            {
                if (img == -1)
                {
                    cout<<"Complex = -i";
                }
                else if (img != -1)
                {
                    cout<<"Complex = "<<img<<"i";
                }
            }
            else if (img == 0)
            {
                cout<<"Complex = 0";
            }
            else if (img > 0)
            {
                if (img == 1)
                {
                    cout<<"Complex = i";
                }
                else if (img != 1)
                {
                    cout<<"Complex = "<<img<<"i";
                }
            }
        }
        else if (real > 0)
        {
            if (img < 0)
            {
                if (img == -1)
                {
                    cout<<"Complex = "<<real<<" - i";
                }
                else if (img != -1)
                {
                    cout<<"Complex = "<<real<<" - "<<(img * -1)<<"i";
                }
            }
            else if (img == 0)
            {
                cout<<"Complex = "<<real;
            }
            else if (img > 0)
            {
                if (img == 1)
                {
                    cout<<"Complex = "<<real<<" + i";
                }
                else if (img != 1)
                {
                    cout<<"Complex = "<<real<<" + "<<img<<"i";
                }
            }
        }
        cout<<endl;
    }
    // Member Add Function of two complex numbers
    Complex Add(const Complex& right)
    {
        Complex result;
        result.real = this->real + right.real;
        result.img = this->img + right.img;
        return result;
    }
    // Initializing Function [OverLoading]
    // Function-1
    void Initialize()
    {
        this->real = 3;
        this->img = 4;
    }
    // Function-2
    void Initialize(int _real, int _img)
    {
        this->real = _real;
        this->img = _img;
    }
    // Function-3
    void Initialize(int _num)
    {
        real = img = _num;
    }
};

// Standalone Function to add two complex numbers
Complex AddComplex(Complex& left, Complex& right)
{
    Complex result;
    int r = left.GetReal() + right.GetReal();
    int i = left.GetImg() + right.GetImg();
    result.SetReal(r);
    result.SetImg(i);
    return result;
}

int main(void)
{
    Complex c1,c2,c3,c4;            // Define Objects
    
    c1.SetReal(5);                  // Set Real value for c1
    c1.SetImg(-4);                  // Set Imaginary value for c1
    c1.PrintComplex();              // Print c1 Complex values
    
    c2.Initialize(4, 8);            // Set Real & Imagninary values for c2 using Initializing function that take two parameters
    c2.PrintComplex();              // Print c2 Complex values
    
    c3 = c1.Add(c2);                // Result for the sum of two complex c1 and c2 is c3
    c3.PrintComplex();              // Print the result for the sum of two complex numbers
    c4 = AddComplex(c1, c2);        // Add two complex numbers using the standalone function
    c4.PrintComplex();              // Print the result for the sum of two complex numbers
    
    return 0;                       // Indicates that the program ends succesfully
}
