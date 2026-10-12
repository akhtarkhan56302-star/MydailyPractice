#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    void getdata(){
        cout<<"Enter name:";
        cin>> name;
        cout<<"Enter your age:";
        cin>> age;
    }
    void display(){
        cout<<"My name is :"<<name<<endl;
        cout<<"My age is :"<<age<<endl;
    }
};
int main(){
    Student s1;
    s1.getdata();
    s1.display();




    return 0;
}