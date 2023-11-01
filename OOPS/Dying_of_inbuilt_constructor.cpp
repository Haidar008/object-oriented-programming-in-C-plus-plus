#include<iostream>
using namespace std;
class Hero{
    public:
        int health;
        Hero(int health){
            (*this).health=health;
        }
};
int main(){
    Hero h1(67);
    cout<<h1.health<<endl;

    Hero h2;
    return 0;
}