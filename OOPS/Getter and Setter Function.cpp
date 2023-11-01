#include<iostream>
using namespace std;
class Cuboid{
    private:
        int length,breadth,height;
    public:
        void setter(int l,int b,int h){
            length=l;
            breadth=b;
            height=h;
        }
        int getter(){
            return length*breadth*height;
        }
};
int main(){
    Cuboid c1;
    c1.setter(2,3,4);
    cout<<"The area is:"<<c1.getter()<<endl;
    return 0;
}