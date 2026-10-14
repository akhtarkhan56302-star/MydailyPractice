#include <iostream>
#include <string>
using namespace std;
class Student{
private:
string name;
int age;
int marks;
int rollno;
string dept;
public:
Student(string n,int a, int m, int r,string d){

    name=n;
    age=a;
    marks=m;
    rollno=r;
    dept=d;

}
void display(){
    cout<<"My name is"<<name<<endl;
    cout<<"MY age is "<<age <<endl;
    cout<<"MY rollno is "<<rollno<<endl;
    cout<<"My marks are"<<marks<<endl;
    cout<<"My department is "<<dept<<endl;
}
    void result(){
        if(marks>=45){
            cout<<"your pass:"<<endl;

        }
        else {
        cout<<"you are fail try again:"<<endl;
        }
    }
};

int main(){
    Student s1("akhterkhan",19,95,1155,"Computerscince");
    s1.display();
    s1.result();




    return 0;
}