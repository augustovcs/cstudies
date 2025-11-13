#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};

struct test {
    int A[5];
    int n;
};


void changeLength(struct Rectangle *p, int l) {

    p->length = l;

}


void fun(struct test &t1) {

    t1.A[0] = 10;
    t1.A[1] = 20;
    t1.A[2] = 30;

    t1.n = 999;

}


int main() {

    struct test t={{2,4,6,8,10},5};


    struct Rectangle r={10, 5};

    changeLength(&r, 20);
    fun(t);

    cout<<r.length<<endl;
    cout<<t.A[0]<<endl;

   
}