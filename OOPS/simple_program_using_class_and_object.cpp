#include<iostream>
using namespace std;
class Haidar{
    public:
        int age;
        string full_name;
        char fav_char;
        float monthly_expenses;
};
int main(){
    Haidar h;
    h.age=23;
    h.full_name="MD Haidar Parwez";
    h.fav_char='I';
    h.monthly_expenses=7000;

    cout<<h.full_name<<endl;
    cout<<h.age<<endl;
    cout<<h.fav_char<<endl;
    cout<<h.monthly_expenses<<endl;


    cout<<"The size of object is "<<sizeof(h)<<endl;
    return 0;
}