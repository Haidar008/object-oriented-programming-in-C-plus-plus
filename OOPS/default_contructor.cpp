#include<iostream>
using namespace std;
class Wall{
    private:
        int length;
    public:
        Wall(){
            length=10;
            cout<<"Length is:"<<length<<endl;
        }
};
int main(){
    Wall obj;
}