#include<iostream>
using namespace std;
class Test{
  public:
    char a;
    int b;
    char c;
    char d;
    int e;
};
int main(){
    Test obj;
    cout<<"The size of object is "<<sizeof(obj)<<endl;
    return 0;}