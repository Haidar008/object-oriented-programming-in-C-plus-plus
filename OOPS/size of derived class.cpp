#include<iostream>
using namespace std;
class test{
    public:
        int a;
};
class derived:public test{
    private:
        char b;
    public:
        char f;
        char g;
        char h;
        int d;
};
int main(){
    derived obj;
    cout<<sizeof(obj)<<endl;
}