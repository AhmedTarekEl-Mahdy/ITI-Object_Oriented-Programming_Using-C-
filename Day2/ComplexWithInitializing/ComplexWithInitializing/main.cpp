//
//  main.cpp
//  ComplexWithInitializing
//  Program of Complex class that contains setter/ getter and using this->, 1 member function to add two complex, three function of initializing using overloading, and one standalone function to add two complex numbers
//  Created by Ahmed Tarek on 22/12/2025.
//

#include <iostream>
using namespace std;

// Class Complex
class Complex
{
    // Define variables as private
private:
    int real;
    int img;
public:
    // Setter for Real Number
    void SetReal(int _real)
    {
        this->real = _real;
    }
    // Getter for Real Number
    int GetReal()
    {
        return this->real;
    }
    // Setter for Imaginary Number
    void SetImg(int _img)
    {
        this->img = _img;
    }
    // Getter for Imaginary Number
    int GetImg()
    {
        return this->img;
    }
    // Print Function for Complex
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
    
    // Member function to add two complex numbers
    Complex AddComplex(const Complex& right)
    {
        Complex result;
        result.real = this->real + right.real;
        result.img = this->img + right.img;
        return result;
    }
    // Initializing Functions
    void Initialize()
    {
        real = 3;
        img = 4;
    }
    void Initialize(int _real, int _img)
    {
        real = _real;
        this->img = _img;
    }
    void Initialize(int num)
    {
        this->real = num;
        this->img = num;
    }
};

// Standalone Function to add two complex numbers
Complex AddComplex(Complex& left,Complex& right)
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
    Complex c1,c2,c3;       // Define Objects
    c1.SetReal(3);
    c1.SetImg(4);
    c2.SetReal(3);
    c2.SetImg(4);
    c3.SetReal(3);
    c3.SetImg(4);
    c1.PrintComplex();
    cout<<"============"<<endl;
    c2.PrintComplex();
    cout<<"============"<<endl;
    c3.PrintComplex();
    cout<<"============"<<endl;
    Complex c4;
    c4.SetReal(3);
    c4.SetImg(4);
    c4.PrintComplex();
    
    cout<<"============"<<endl;
    c1.Initialize(5, 6);
    c1.PrintComplex();
    cout<<"============"<<endl;
    c2.Initialize();
    c2.PrintComplex();
    cout<<"============"<<endl;
    c3.Initialize(4);
    c3.PrintComplex();
    
    return 0;       // Indicates that the program ends succesfully
}
