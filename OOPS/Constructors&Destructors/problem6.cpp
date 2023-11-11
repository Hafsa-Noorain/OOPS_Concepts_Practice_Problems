#include <iostream>
using namespace std;

class myClass{
   int a;
   public:
   myClass(int x) {
       a=x;
       cout<<"Constructor: "<<a<<endl;
   }
   
   ~myClass() {
       cout<<"Destructor: "<<a<<endl;
   }
};

void myFunc(int x) {
    myClass obj1(x);
}

int main() {
   myClass obj1(1),obj2(2),obj3(3);
   myFunc(4);
   myFunc(5);
    return 0;
}