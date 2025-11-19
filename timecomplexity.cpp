///example 1
#include <stdio.h>
#include <iostream>

using namespace std;



class OComplexity{

    public:
    //this is a O(1)
    void Swap(int x ,int y) {
        
        int t; 
        t = x;
        x = y;
        y = t;
        
    }

    //this is a O(n) -> execute n times if need
    int Sum(int A[], int n) {
        int s, i;
        s = 0;

        for (i = 0; i<n; i++) {
            s = s+A[i];
        }
        return s;
    }
    // this is O(n²)
    void Add(int n) {
        int **A, **B, **c;
        int i, j;
        for (i = 0; i<n; i++) {
            for (j = 0; j < n; j++) {
                c[i][j] = A[i][j] + B[i][j];
            }
        }
    }

};

