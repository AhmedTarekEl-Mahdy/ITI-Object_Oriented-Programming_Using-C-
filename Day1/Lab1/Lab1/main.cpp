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
    int real;
    int img;
    
public:
    void SetReal(int _real)
    {
        real = _real;
    }
    int GetReal()
    {
        return real;
    }

    void SetImg(int _img)
    {
        img = _img;
    }

    int GetImg()
    {
        return img;
    }

    void Print()
    {
        if (real == 0)
        {
            if (img < 0)
            {
                if (img != -1)
                {
                    cout<<img<<"i";
                }
                else if (img == -1)
                {
                    cout<<"-i";
                }
            }
            else if (img > 0)
            {
                if (img == 1)
                {
                    cout<<"i";
                }
                else if (img != 1)
                {
                    cout<<img<<"i";
                }
            }
            else
            {
                cout<<"0";
            }
        }
        else if (real > 0)
        {
            if (img < 0)
            {
                if (img != -1)
                {
                    cout<<real<<img<<"i";
                }
                else if (img == -1)
                {
                    cout<<real<<"-i";
                }
            }
            else if (img > 0)
            {
                if (img != 1)
                {
                    cout<<real<<"+"<<img<<"i";
                }
                else if (img == 1)
                {
                    cout<<real<<"+i";
                }
            }
            else
            {
                cout<<real;
            }
        }
        else if (real < 0)
        {
            if (img < 0)
            {
                if (img != -1)
                {
                    cout<<real<<img<<"i";
                }
                else if (img == -1)
                {
                    cout<<real<<"-i";
                }
            }
            else if (img > 0)
            {
                if (img != 1)
                {
                    cout<<real<<"+"<<img<<"i";
                }
                else if (img == 1)
                {
                    cout<<real<<"+i";
                }
            }
            else
            {
                cout<<real;
            }
        }
        
        cout<<endl;
    }

    Complex AddOld(Complex left,Complex right)
    {
        Complex result;
        result.real = left.real + right.real;
        result.img = left.img + right.img;
        return result;
    }
    
    Complex Add(const Complex& right)
    {
        Complex result;
        result.real= real + right.real;
        result.img = img + right.img;
        return result;
    }

};

Complex AddComplex(Complex& left,Complex& right)
{

    Complex result;

    int r = left.GetReal() + right.GetReal();
    int i = left.GetImg() + right.GetImg();
    result.SetReal(r);
    result.SetImg(i);
    return result;
}
//

int main()
{
    int tmp;
    Complex c1, c2, c3;

    cout<<"Enter real of First number: ";
    cin>>tmp;
    c1.SetReal(tmp);
    cout<<"Enter imgainary of First number: ";
    cin>>tmp;
    c1.SetImg(tmp);
    
    cout<<"First Complex = ";
    c1.Print();
    
    cout<<"Enter real of Second number: ";
    cin>>tmp;
    c2.SetReal(tmp);
    cout<<"Enter imaginary of Second number: ";
    cin>>tmp;
    c2.SetImg(tmp);

    cout<<"Second Complex = ";
    c2.Print();
    
    cout<<"After Adding First Complex and Second Complex Then"<<endl;
    
    c3 = c1.Add(c2);
    cout<<"Third Complex = ";
    c3.Print();

    return 0;
}
