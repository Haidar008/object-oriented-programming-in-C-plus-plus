#include<iostream>
using namespace std;
class Haidar{
    private:
        int b;
    public:
    Haidar(){
        b=10;
    }
    Haidar(int x){
        this->b=x;
    }
    int getVal(){
        return b;
    }
};
int main(){
    Haidar h1(8);
    cout<<h1.getVal()<<endl;

    Haidar*Haidar1=new Haidar();
    cout<<Haidar1->getVal()<<endl;
    return 0;
}