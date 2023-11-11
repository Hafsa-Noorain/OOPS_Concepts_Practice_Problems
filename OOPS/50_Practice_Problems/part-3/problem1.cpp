#include <iostream>
using namespace std;

class B {
    public:
    B() {
        cout<<"CLass B"<<endl;
    }
};

class C {
    public:
    C() {
        cout<<"Class C"<<endl;
    }
};

class D: public C,B {
    public:
    D() {
        cout<<"Class D"<<endl;
    }
};

int main() {
    D *b=new D();
    return 0;
}