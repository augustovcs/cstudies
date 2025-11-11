#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};


int main() {


    struct Rectangle *p;

    p = (struct Rectangle*)malloc(sizeof(struct Rectangle));

    p -> breadth = 10;

    cout << p->breadth << endl;

    // ---- another way -----

    struct Rectangle r = {10 , 5 };
    struct Rectangle *j = &r;

    r.length = 15;
    (*j).length = 20;

    printf("%d\n", *j);


}