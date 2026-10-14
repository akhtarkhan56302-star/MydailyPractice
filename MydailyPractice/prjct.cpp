#include <iostream>
using namespace std;
class Student{
private:
string name;
int rollno;
float marks;
public:
Student(string n,int r,float m){
    name=n;
    rollno=r;
    marks=m;

}
void show(){
cout<<"My name is "<<name<<endl;
cout<<"My rollno is "<<rollno<<endl;
cout<<"My marks are "<<marks<<endl;
}
 void showgrade(){
if (marks>=90){
    cout<<"your grade is A:"<<endl;

}
else if (marks>=85){
    cout<<"your grade is B"<<endl;

}
else if (marks<80){
    cout<<"your grade is C:"<<endl;
}
    else 
    {
        cout<<"your are fail:"<<endl;

    }
 }

};
int main(){

string name;
int rollno;
int marks;
cout<<"===Student Managment System ==="<<endl;
cout<<"Enter student name:"<<endl;
getline(cin,name);
cout<<"Enter rollnomber:"<<endl;
cin>>rollno;
cout<<"Enter your Marks:"<<endl;
cin>>marks;
if(rollno<=0||marks<0||marks>100){

    cout<<"Invalid input!"<<endl;

}
Student s1(name,rollno,marks);
s1.show();
s1.showgrade();


return 0;
}
