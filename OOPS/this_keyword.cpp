#include<iostream>
using namespace std;
class Hero{
    public:
        int health;
        char level;
        Hero(int health,int lev){
            this->health=health;
            this->level=lev;
        }
        void getdata(){
            cout<<(*this).health<<endl;
            cout<<this->level<<endl;
        }
};
int main(){
    Hero ramesh(70,'A');
    ramesh.getdata();
}