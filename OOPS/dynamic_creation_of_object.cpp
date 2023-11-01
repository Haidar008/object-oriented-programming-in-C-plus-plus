#include<iostream>
using namespace std;
class Circle{
    public:
        int radius;

        void setRad(int r){
            radius=r;
        }

        float getArea(){
            return 3.14*radius*radius;
        }
        
};
int main(){
    Circle*c=new Circle();
    (*c).setRad(4);
    cout<<"The Area is:"<<(*c).getArea()<<endl;

    c->setRad(5);
    cout<<"The Area is:"<<c->getArea()<<endl;
    return 0;
}