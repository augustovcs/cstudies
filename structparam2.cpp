#include <stdio.h>
#include <iostream>
#include <array>


using namespace std;


//struct and class are the same, but, 
//class is often used as private member access only

class Rectangle {
public:
    int length;
    int breadth;

};


struct test {
public:
    int A[5];
    int n;

    void changeLength(struct Rectangle *p, int l) {

        p->length = l;

    }

    void fun(struct test &t1) {


        cin>>t1.A[0]>>t1.n;
        t1.A[0]++;
        t1.n++;
    }
};


int main() {

    struct test t={{2,4,6,8,10},2};

    class Rectangle r={10, 5};

    t.changeLength(&r, 20);
    t.fun(t);

    int lengthA = size(t.A);
    int lengthAvar = sizeof(t.A) / sizeof(t.A[0]); // bytes to elements count


    for(int i=0; i<lengthAvar; i++)
    cout<<t.A[i]<<endl;


    cout<<t.n<<endl;

   
}

