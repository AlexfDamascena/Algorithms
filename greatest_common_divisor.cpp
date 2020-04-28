#include<bits/stdc++.h>
using namespace std;
// let a > b
int brute_force(int a, int b){
    int aux;
    if(a >= b){
        aux = b;
        while(!(a % aux == 0 && b % aux == 0)) aux--;
    }
    return aux;
}

//Euclidean algorithm is more efficient
// let a > b
int euclides_recursive(int a,int b){
    if( b == 0) return a;
    return euclides_recursive(b,(a%b));
}
// let a > b
int euclides_iterative(int a, int b){
    if(a >= b) {
        while (a % b != 0) {
            int mod = a % b;
            a = b;
            b = mod;
        }
        return b;
    }
}

int main(){
    cout << brute_force(30,24) << endl;
    cout << euclides_recursive(30,18) << endl;
    cout << euclides_iterative(30,10) << endl;
}

