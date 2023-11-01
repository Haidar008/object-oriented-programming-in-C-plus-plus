#include<iostream>
using namespace std;
class Hero{
    public:
          int health,level;
    Hero(int h,int l){
        this->health=h;
        this->level=l;
    }

    Hero(Hero &obj){
        /*health=obj.health;
        level=obj.level;*/
        this->health=obj.health;
        this->level=obj.level;
    }
};
int main(){
    Hero obj1(30,4);
    //cout<<obj1.health<<" "<<obj1.level<<endl;

    //Hero obj2(obj1);
    Hero obj2=obj1;

    cout<<obj2.health<<" "<<obj2.level<<endl;
}