#include<bits/stdc++.h>
using namespace std;

//given an list of n-1 integers:
    //- these integers are in the range 1 to n

//search for the missing number
//the list isn't ordered


//this function works with XOR operation.
int mn(int array[],int size){
    int max = *max_element(array,array+size);
    int min = *min_element(array,array+size);

    int b = array[0];
    for(int i=1; i < size; i++){
        b ^= array[i];
    }
    for(int i=min+1; i <= max; i++){
        min ^= i;
    }
    return (min ^ b);
}


int main(){
    int array[] = {1,3,5,4,6,7,8,9};
    int size = sizeof(array)/sizeof(array[0]);

    cout << mn(array,size) << endl;


}