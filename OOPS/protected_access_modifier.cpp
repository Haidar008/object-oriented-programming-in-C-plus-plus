#include<iostream>
using namespace std;
class Haidar{
    private:
        int age;
    protected:
        string Full_name;
        char fav_char;
};
class Derived:public Haidar{
    public:
        void set_data(){
           Full_name="MD Haidar Parwez";
           fav_char='I';

        }
        void get_data(){
            cout<<Full_name<<endl;
            cout<<fav_char<<endl;
        }
};
int main(){
        Haidar h1;
        Derived d1;
        d1.set_data();
        d1.get_data();
        return 0;
}
