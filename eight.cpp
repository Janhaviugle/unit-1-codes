#include<iostream>
using namespace std;
class Test{
    private:
    int value;
    public:
    Test(int v ){
        value=v;
    }
    inline int getValue(){
        return value;
    }
    friend void display(Test t);
};
void display(Test t){
    cout<<t.value;
}
int main(){
    Test Obj(50);
    cout<<obj.getValue()<<endl;
    show(obj);
    return 0;
}