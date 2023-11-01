#include<iostream>
using namespace std;
class Hero{
    public:
        int health;
        int level;
        Hero(int h,int l){
            health=h;
            level=l;
        }
};
int main(){
    Hero h1(80,1);
    cout<<h1.health<<" "<<h1.level<<endl;
    
    Hero h2(h1);//Inbuilt Copy constructor called

    cout<<h2.health<<" "<<h2.level<<endl;
}