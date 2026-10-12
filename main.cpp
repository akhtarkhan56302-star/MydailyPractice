#include <iostream>
using namespace std;
class Student{
    public:
    string name;
    int age;
    int marks;
    void getdata(){
        cout<<"Enter name:";
        cin>> name;
        cout<<"Enter your age:";
        cin>> age;
        cout<<"Enter your marks:";
        cin>> marks;
    }
    void display(){
        cout<<"My name is :"<<name<<endl;
        cout<<"My age is :"<<age<<endl;
        cout <<"My marks are :"<<marks<<endl;
        if (marks>=90){
            cout<<"your grade is A"<<endl;
        }
            else if(marks>=80){
                cout <<"your grade is B"<<endl;
            }
            else if(marks>=70){
                cout <<"your grade is C:"<<endl;

        }
        else 
        cout<<"your are failed "<<endl;
    }
};
int main(){
    Student s1;
    s1.getdata();
    s1.display();




    return 0;
}