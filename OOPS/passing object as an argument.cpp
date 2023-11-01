#include<iostream>
using namespace std;
class ComplexNumber{
    public:
        int real,imaginary;
    ComplexNumber(int r,int i){
        this->real=r;
        this->imaginary=i;
    }
    void ADD(ComplexNumber c){
        real=real+c.real;
        imaginary=imaginary+c.imaginary;
    }
    void print(){
        cout<<real<<" "<<"+"<<" "<<"i"<<imaginary<<endl;
    }
};
int main(){
    ComplexNumber c1(3,5);
    ComplexNumber c2(1,2);
    c1.print();
    c2.print();
    
    c1.ADD(c2);
    c1.print();

    return 0;
}