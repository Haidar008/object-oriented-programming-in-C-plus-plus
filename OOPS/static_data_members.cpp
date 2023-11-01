#include<iostream>
using namespace std;
class Hero{
    public:
       static int TimeToComplete;
        Hero(){

        }
};
int Hero::TimeToComplete=45;
int main(){
    cout<<Hero::TimeToComplete<<endl;

    Hero obj1;
    obj1.TimeToComplete=26;

    cout<<Hero::TimeToComplete<<endl;

    Hero obj2;
    cout<<obj2.TimeToComplete<<endl;
    
    return 0;
}