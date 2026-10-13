#include <iostream>
using namespace std;
class Date{
public:
int Day;
int Month;
int Year;
void set_date(int nDay,int nMonth,int nYear){

    Day=nDay;
    Month=nMonth;
    Year=nYear;
}
void showdate(){
    cout<<"My birth day is "<<Day<<endl;
    cout<<"My birth  Month is "<<Month<<endl;
    cout<<"My birth Year is "<<Year<<endl;
}
};
int main(){
Date d1;
d1.set_date(2,22,2026);
d1.showdate();
return 0;




}