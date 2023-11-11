#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class A {
    static int i;
    int j;
};

int A::i;

int main() {
    cout<<sizeof(A);
    return 0;
}