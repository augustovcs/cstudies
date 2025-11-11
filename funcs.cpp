#include <stdio.h>
#include <iostream>

using namespace std;


void Swap(int &x, int &y) {

	int temp;

	temp = x;
	x = y;
	y = temp;

    printf("%d %d\n ", x,y );
	
}

int main() {
	
	int a = 10;
	int b = 15;
	
	Swap(a, b);
	printf("%d %d ", a, b); //resultado vai ser 10, 15

}
