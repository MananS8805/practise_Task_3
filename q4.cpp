#include<iostream>
using namespace std;
class complex{
    int real;
    int imaginary;
    public:
    complex(int r,int i)
    {
        this->real=r;
        this->imaginary=i;
    }
    void display()
    {
        if(imaginary<0)
        {
        cout<<real<<imaginary<<"i"<<endl;    
        }
        else{
        cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
    }

    complex add(complex *a)
    {
        return complex(real+a->real,imaginary+a->imaginary);
    }
    complex sub(complex *a)
    {
        return complex(real-(a->real),imaginary-(a->imaginary));
    }
    complex multiply(complex *a)
    {
        int realPart = (real * (a->real)) - (imaginary * (a->imaginary));  // (ac - bd)
        int imaginaryPart = (real * (a->imaginary)) + (imaginary * (a->real));  // (ad + bc)
        return complex(realPart, imaginaryPart);
    }
};
int main()
{
    complex c1(5,-7);
    complex c2(-5,-9);
    c1.display();
    c2.display();
    complex demo_add=c1.add(&c2);
    cout<<"addition result is"<<endl;
    demo_add.display();
    complex demo_subtract=c1.sub(&c2);
    cout<<"subtraction result is"<<endl;
    demo_subtract.display();
    complex demo_multiply=c1.multiply(&c2);
    cout<<"multiplication result is"<<endl;
    demo_multiply.display();
}