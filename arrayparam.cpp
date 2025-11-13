#include <iostream>
#include <stdio.h>


using namespace std;


int * arrayFun(int size) 
{
    int *p;
    p = new int[size];

    for(int i = 0; i<size; i++) {
        p[i] = i+1;
        cout<<p[i]<<endl;
    }


    return p;
}

int main() {


    int *ptr, sz = 5;

    ptr = arrayFun(sz);

    for(int i = 0; i<sz; i++) {
        cout<<ptr[i]<<endl;
    }



}