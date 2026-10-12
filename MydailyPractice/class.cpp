#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int marks;
    void getdata(){
        cout<<"Enter your name ";
        cin>>name;
        cout<<"Enter your age ";
        cin>>age;
        cout<<"Enter your marks";
        cin>>marks;

    }
    void display(){
        cout<<"I am "<<name<<endl;
        cout<<"I am "<<age<<"years old  t/ "<<endl;
        cout<<"I got "<<marks<<"marks"<<endl;

    }

};
int main(){
    Student s1;
    s1.name="Akhter";
    s1.age=19;
    s1.marks=90;
    s1.display();
    