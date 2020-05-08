#include<bits/stdc++.h>
using namespace std;


//give an array, replace every element with the next
//greatest element and replace -1 for the last number, example:
//array[] ={19,20,10,14,15,3}
//returns : {20,15,15,15,3,-1}
void replace_element(int array[],int size){
    int maxi = array[size-1];
    array[size-1] = -1;
    for(int i = size -2; i >=0; i--){
        int aux = array[i];
        array[i] = maxi;
        maxi = max(aux, maxi);
    }
}

int main(){
    int array[] ={19,20,10,14,15,3};
    int size = sizeof(array)/sizeof(array[0]);
    replace_element(array,size);

    for(int i : array){
        cout << i << " ";
    }
}