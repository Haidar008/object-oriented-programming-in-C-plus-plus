#include<iostream>
using namespace std;
class Hero{
    public:
        static int TimeToComplete;
        int health;
        static int random(){
            return health;  //Error is thrown by the compiler;
        }
};
int Hero::TimeToComplete=70;

int main(){

    cout<<Hero::random()<<endl;
    
    Hero obj1;
    obj1.health=7;
    cout<<obj1.random()<<endl;

    return 0;
}