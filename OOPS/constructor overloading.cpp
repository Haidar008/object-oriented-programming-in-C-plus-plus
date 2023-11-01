#include<iostream>
using namespace std;
class construct{
    public:
        float area;
        construct(){
            area=0;
        }
        construct(int a,int b){
            area=a*b;
        }
        void disp(){
            cout<<area<<endl;
        }
};
int main(){
        construct o1;
        construct o2(3,4);

        o1.disp();
        o2.disp();
        return 0;
}