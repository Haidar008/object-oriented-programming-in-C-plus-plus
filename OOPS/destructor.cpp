#include<iostream>
using namespace std;
class Hero{
    private:
        int a,b;
    public:
        Hero(){

        }
        ~Hero(){
            cout<<"Destructor Called and Object Destroyed "<<endl;
        }
};
int main(){
    Hero h1;
    Hero *h2=new Hero();
    delete (h2);
}