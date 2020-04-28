#include<bits/stdc++.h>
using namespace std;

//p(x) = x^4 + 3xˆ3 - 6xˆ2 + 2x + 1
//this can be evaluated as (((x+3)x-6)x+2)x + 1 after factoring.

//time complexity: brute force -- > O(n^2)
//time complexity horner's method -- > O(N*logN)

//this array is composed of polynomial coefficients.

int horner_method(int array[],int x,int size){
    int ans = array[0];

    for(int i=1;i<size;i++){
        ans = ans*x +array[i];
    }
    return ans;
}

int main(){
    int arr[] = {1,3,-6,2,1};
    int x = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    cout << horner_method(arr,x,size) << endl;
    return 0;
}
