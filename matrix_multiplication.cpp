#include <bits/stdc++.h>
using namespace std;

//you can change the value of N!

#define N 3

int main() {
    int matrix1[N][N], matrix2[N][N];

    // input all elements on matrix1
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            cin >> matrix1[i][j];

    }
    //input all elements on matrix2
    for(int i= 0; i < N; i++){
        for(int j=0; j< N; j++)
            cin >> matrix2[i][j];
    }

    //calculate a matrix multiplication quadratic,but also works for any
    // matrix multiplication:
    int matrix_multi[N][N];

    for(int i= 0; i < N; i++){
        for(int j=0; j < N; j++){
            int t=0;
            for(int k=0; k < N; k++){
                t += matrix1[i][k] * matrix2[k][j];
            }
            matrix_multi[i][j] = t;
        }
    }

    //print values;

    for(int i= 0; i < N; i++){
        for(int j=0; j< N; j++){
            if(j==N-1) printf("%d",matrix_multi[i][j]);
            else printf("%d ",matrix_multi[i][j]);
        }
        printf("\n");
    }
    return 0;
}