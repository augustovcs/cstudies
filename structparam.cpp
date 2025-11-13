#include <stdio.h>
#include <iostream>

using namespace std;

struct Rectangle {
    int length;
    int breadth;
};


int area(struct Rectangle &r2) {

    r2.length++;
    return r2.length * r2.breadth;

}


int main() {

    struct Rectangle r = {10, 5};
    cout << area(r) << endl;
}