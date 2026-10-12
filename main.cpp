#include <iostream>
using namespace std;
class Studnet{
    public:
    string name;
    int age;
};
int main(){
Studnet s1;
cout<<"enter name:";
cin>>s1.name;
cout<<"enter age:";
cin>>s1.age;
cout<<"Student Information:"<<endl;
cout<<"Student Name is :"<<s1.name<<endl;
cout<<"Student Age is :"<<s1.age<<endl;



    return 0;
}