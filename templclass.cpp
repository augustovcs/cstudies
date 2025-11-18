#include <iostream>
#include <stdio.h>

using namespace std;

template<class T>
class Arithmetic {

    private:
        T a;
        T b;

    public:
    Arithmetic(T a, T b);
    T Add();
    T Sub();
    
};

template<class T>
Arithmetic<T>::Arithmetic(T a, T b) {
    this->a = a;
    this->b = b;
}

template<class T>
T Arithmetic<T>::Add() {
    T c;
    c = a+b;
    return c;
}

template<class T>
T Arithmetic<T>::Sub() {
    T c;
    c = a-b;
    return c;
    
}
    

int main() {

    Arithmetic<int> ar(10, 5), ar2(15, 7);

    cout << "Add " << ar.Add() << endl;
    cout << "Sub " << ar.Sub() << endl;

    return 0;
    

}