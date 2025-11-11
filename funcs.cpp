#include <stdio.h>
#include <iostream>

using namespace std;

void Swap(int *x, int *y) {

	int temp;

	temp = *x;
	*x = *y;
    *y = temp;
	
}

int main() {
	
	int a = 10;
	int b = 15;
	
	Swap(&a, &b);
	printf("%d %d ", a, b);
	
	
}