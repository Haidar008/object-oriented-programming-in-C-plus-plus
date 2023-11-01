#include<iostream>
using namespace std;
class construct{
    private:
        int a,b;
    public:
        construct(int x,int y){
            this->a=x;
            this->b=y;
        }
        construct(construct &p2){
            a=p2.a;
            b=p2.b;
        }
        int getX(){
            return a;
        }
        int getY(){
            return b;
        }
};
int main(){
    construct p1(10,15);
    construct p2=p1;
    cout<<p1.getX()<<" "<<p1.getY()<<endl;
    cout<<p2.getX()<<" "<<p2.getY()<<endl;
    return 0;
}