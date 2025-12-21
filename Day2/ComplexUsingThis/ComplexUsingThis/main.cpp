//
//  main.cpp
//  ComplexUsingThis
//  Program to print Complex number and use add function to add two complex use this or *this
//  Created by Ahmed Tarek on 21/12/2025.
//

#include <iostream>
using namespace std;

// Class of Complex
class Complex
{
    // Define variables as private
private:
    int real;
    int img;
    
    // Define public functions
public:
    // Setter for Real number
    void SetReal(int _real)
    {
        this->real = _real;
    }
    // Getter for Real number
    int GetReal()
    {
        return this->real;
    }
    // Setter for Imaginary number
    void SetImg(int _img)
    {
        this->img = _img;
    }
    // Getter for Imaginary number
    int GetImg()
    {
        return this->img;
    }
    // Print Function for Complex Numbers
    void PrintComplex()
    {
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
                    cout<<"Complex = "<<real<<" - "<<img<<"i";
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
    // Member function to add two Complexes
    Complex Add(const Complex& right)
    {
        Complex result;
        result.real = real + right.real;
        result.img = img + right.img;
        return result;
    }
};

// Standalone Function to Add two Complexes
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
    int tmp;                        // Define variable
    Complex c1, c2, c3;             // Define objects
    
    cout<<"Enter real of First number: ";       // Ask the user to enter the first real number
    cin>>tmp;                                   // Read the value
    c1.SetReal(tmp);                            // Set the value for real of c1
    cout<<"Enter imgainary of First number: ";  // Ask the user to enter the first imaginary number
    cin>>tmp;                                   // Read the value
    c1.SetImg(tmp);                             // Set the value for imaginary of c1
    c1.PrintComplex();                          // Print First Complex number
    
    cout<<"Enter real of Second number: ";      // Ask the user to enter the second real number
    cin>>tmp;                                   // Read the value
    c2.SetReal(tmp);                            // Set the value for real of c2
    cout<<"Enter imaginary of Second number: "; // Ask the user to enter the second imaginary number
    cin>>tmp;                                   // Read the value
    c2.SetImg(tmp);                             // Set the value for imaginary of c2
    c2.PrintComplex();                          // Print the Second Complex number
    
    cout<<"After Adding First Complex and Second Complex Then"<<endl;
    
    c3 = c1.Add(c2);                            // Add two Complex Numbers
    c3.PrintComplex();                          // Print the Result of sum two complex numbers

    return 0;                   // Indicates that the program ends succesfully
}
