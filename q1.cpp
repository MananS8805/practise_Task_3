#include<iostream>
using namespace std;

class Student{
    private:
    int roll_no;
    string name;
    float marks_in_semester;
    
    public:
    static int counter;

    
    Student(int i,string n, float m)
    {
        this->roll_no=i;
        this->name=n;
        this->marks_in_semester=m;
        counter++;
    }
    
    void display_details()
    {
        cout<<"Roll no: "<<roll_no<<endl;
        cout<<"Name :"<<name<<endl;
        cout<<"Marks in current semester: "<<marks_in_semester<<endl;
    }
};
int Student::counter=0;

int main()
{
    
    Student b1(1,"Jon",90.5);
    Student b2(2,"Robb",48.9);
    Student b3(3,"Brandon",90.0);
    cout<<"NUmber of objects created are "<<Student::counter<<end;
    cout<<"\n displaying student data"<<endl;
    b1.display_details();
    b2.display_details();
    b3.display_details();
    return 0;
}