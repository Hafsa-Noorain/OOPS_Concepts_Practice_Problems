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
    void fun1() {
        cout<<"Derived ";
    }
    void fun2() {
        cout<<"Derived ";
    }
};

int main() {
    B *b;
    D obj;
    b=&obj;
    b->fun1();
    return 0;
}