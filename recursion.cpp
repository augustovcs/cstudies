#include <stdio.h>
#include <iostream>

using namespace std;


void fun2(int n); // use quando quiser indirect recursion
void fun1(int n) {
	
if (n > 0) {
	printf("%d", n);
	fun2(n-1);	
	}
	
}


void fun2(int n) {
	
if (n > 0) {
    fun1(n-1);	
	printf("%d", n);
		
	}
	
}


void treeRecursion(int n) {

	if (n > 0) {
		printf("%d", n);
		treeRecursion(n-1);
		treeRecursion(n-1);

	}


}


int nestedRecursion(int n) {

	if (n > 10) 
		return n-1;
	return nestedRecursion(nestedRecursion(n+20));



}

int main() {

	int x = 4;

    fun1(x);
    cout << "\n"; 

    fun2(x);

	cout << "\n";
	//treeRecursion(x);
	cout << "\n";

	int r;
	r = nestedRecursion(10);
	printf("%d", r);

	return 0;
	
}


