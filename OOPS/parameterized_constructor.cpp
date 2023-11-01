#include<iostream>
using namespace std;
class Wall{
    private:
        double length;
        double height;
    public:
        Wall(double l,double h){
            length=l;
            height=h;
        }
        double CalcArea(){
            return length*height;
        }
};
int main(){
    Wall w1(10.5,8.6);

    Wall *w2=new Wall(8.5,6.3);

    cout<<"The Area is:"<<w1.CalcArea()<<endl;
    cout<<"The Area is:"<<(*w2).CalcArea()<<endl;
    return 0;
}