//
//  main.cpp
//  Lab1
//  Program of Complex Numbers to get two complexes and print them, then added them and print their result.
//  Created by Ahmed Tarek on 20/12/2025.
//

#include <iostream>
using namespace std;

// Class of Complex
class Complex
{
private:
    // Define private variables
    int real;
    int img;
public:
    // Setter for real number
    void SetReal(int _real)
    {
        real = _real;
    }
    // Getter for real number
    int GetReal()
    {
        return real;
    }
    // Setter for imaginary number
    void SetImg(int _img)
    {
        img = _img;
    }
    // Getter for imaginary number
    int GetImg()
    {
        return img;
    }
    // Print funtion for Complex number
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
                    cout<<"Complex = "<<real<<" - "<<(img*-1)<<"i";
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
                cout<<"Complex = "<<real;
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
                    cout<<"Complex = "<<real<<" - "<<(img*-1)<<"i";
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
    // Function to add two complex
    Complex AddOld(Complex left, Complex right)
    {
        Complex result;
        result.real = left.real + right.real;
        result.img = left.img + right.img;
        return result;
    }
    // Another Function to add two complex
    Complex Add(const Complex& right)
    {
        Complex result;
        result.real = real + right.real;
        result.img = img + right.img;
        return result;
    }
};

// Standalone Function to add two complex
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
    int tmp;                // Define variable tmp
    Complex c1, c2, c3;     // Define objects
    
    cout<<"Enter real of First number: ";           // Ask the user to enter real for the first complex number
    cin>>tmp;                                       // Read the value
    c1.SetReal(tmp);                                // Set value for real of c1
    cout<<"Enter imgainary of First number: ";      // Ask the uset to enter imaginary for the first complex number
    cin>>tmp;                                       // Read the value
    c1.SetImg(tmp);                                 // Set value for imaginary of c1
    
    cout<<"First Complex => ";
    c1.PrintComplex();                              // Print the First complex number
    
    cout<<"Enter real of Second number: ";          // Ask the user to enter real for the second complex number
    cin>>tmp;                                       // Read the value
    c2.SetReal(tmp);                                // Set value for real of c2
    cout<<"Enter imaginary of Second number: ";     // Ask the user to enter imaginary for the second complex number
    cin>>tmp;                                       // Read the value
    c2.SetImg(tmp);                                 // Set value for imaginary of c2
    
    cout<<"Second Complex => ";
    c2.PrintComplex();                              // Print the second complex number
    
    cout<<"After Adding First Complex and Second Complex Then"<<endl;
    
    c3 = c1.Add(c2);                                // Add two complex c1 and c2 using function Add
    cout<<"Third Complex => ";
    c3.PrintComplex();                              // Print the result of the add function
    
    return 0;            // Indicates that the program ends succesfully
}
