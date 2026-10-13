#include <iostream>
using namespace std;
class Student{
public:
string name ;
int marks;
int rollno;
Student (string studentname,int studentmarks,int studentrollno){
    name = studentname;
    marks = studentmarks;
    rollno = studentrollno;
}
void show(){
    cout <<"My name is "<<name<<endl;
    cout<<"My marks are "<<marks<<endl;
    cout<<"My rollno is "<<rollno<<endl;

}


};
int main(){
    Student s1("Akhter Khan",90,1155 );
    s1.show();
    return 0;
}