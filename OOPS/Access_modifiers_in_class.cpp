#include<iostream>
using namespace std;
class Haidar{
    private:
        int age;
    public:
        string full_name;

        void set_age(){
            age=30;
        }
        void show_age(){
            cout<<age<<endl;
        }
};
int main(){
        Haidar h1;
        h1.full_name="Md Haidar Parwez";
        cout<<h1.full_name<<endl;
        h1.set_age();
        h1.show_age();
}
