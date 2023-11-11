#include <iostream>
using namespace std;

class B {
    int a;
    public:
    virtual void fun1() {
        cout<<"Base";
    }
    void fun2() {
        cout<<"Base "<<endl;
    }
};

class D: public B {
    public:
    void fun2() {
        cout<<"Derived ";
    }
};

int main() {
    B *ptr;
    D obj;
    ptr=&obj;
    ptr->fun1();
    return 0;
}