#include <iostream>
using namespace std;

int main() {

    int a = 500;
    int b = 200;

    int  *p;

    //references
    int &r = b;
    b = 201;
    r++;

    int c = 300;
    r = c;

    cout << r <<endl;
    cout << b <<endl;


    // ----------------- //

    int array[5] = {2,4,6,8,10};
    int *q;


    // - c lang
    p = (int *)malloc(5*sizeof(int));

    // - cpp lang
    //p = new int[5]

    p[0] = 10;
    p[1] = 15;
    p[2] = 20;
    p[3] = 30;
    p[4] = 50;

    q = array;
 
    cout << *p << endl;
    cout << *q << endl;

    for (int i = 0; i < 5; i++)
    cout << p[i] << endl;

    // - cpp lang
    delete [ ]p;

    // - c lang
    //free(p)

    return 0;

}
