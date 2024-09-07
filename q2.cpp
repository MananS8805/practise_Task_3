#include<iostream>
using namespace std;

class rectangle
{
    private:
    float length;
    float width;

    public:
    rectangle(float i, float j)
    {
        this->length=i;
        this->width=j;
    }

    float area()
    {
        return length*width;
    }

    float perimeter()
    {
        return length+width;
    }
};

int main(){
    rectangle r1(9.0,8.0);
    cout<<"area is "<<r1.area();
    cout<<"perimeter is "<<r1.perimeter();
}