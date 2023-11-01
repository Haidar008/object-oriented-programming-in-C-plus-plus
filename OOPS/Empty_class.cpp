/*In case of empty class 1 byte of memory is allocated to an object*/
#include<iostream>
using namespace std;
class Haidar{

};
int main(){
    Haidar obj;
    cout<<sizeof(obj)<<endl;
}
