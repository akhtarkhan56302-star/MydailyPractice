#include <iostream>
using namespace std;
class Employee{
    private:
    string name;
    int age;
    int salary;
    public:
    Employee(string n,int a,int s){
        name=n;
        age=a;
        salary=s;

    }
    void display(){
        cout<<"My name is "<<name<<endl;
        cout<<"My age is "<<age<<endl;
        cout<<"My salary is "<<salary<<endl;
    }
};
int main(){
    Employee e1("Akhter",19,20000);
    e1.display();
    return 0;
}