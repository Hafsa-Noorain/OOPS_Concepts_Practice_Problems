#include <iostream>
using namespace std;

class B {
    int a;
    public:
    virtual void fun1()=0; 
    void fun2() {
        cout<<"I am Base "<<endl;
    }
};

class D: public B {
    public:
    void fun1() {
        cout<<"Implemented pure virtual function";
    }
};

int main() {
    B ptr;
    D obj;
    obj.fun2();
    return 0;
}