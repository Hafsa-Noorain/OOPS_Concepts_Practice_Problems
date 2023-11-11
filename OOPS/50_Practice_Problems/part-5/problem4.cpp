#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Host {
    public:
    class Nested {
        public:
        void print() {
            cout<<"Hello World!"<<endl;
        }
    };
};

int main() {
    Host bar;
    bar.print();
    return 0;
}