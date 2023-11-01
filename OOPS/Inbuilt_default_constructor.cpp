#include<iostream>
using namespace std;
class Hero{
    public:
        int health;
        Hero(){
            cout<<"Constructor Called"<<endl;
        }
};//This is not an inbuilt constructor ,by mistake i have named it;
int main(){
    Hero h1;

    Hero*h2=new Hero();

}