#include<bits/stdc++.h>
using namespace std;

//leaders --> if it is greater than all elements at right side
void leaders_array(int array[], int size){

    int leaders = array[size-1];
    cout << leaders << " ";

    for(int i=size-2; i >= 0; i--){
        if(leaders < array[i]){
            leaders = array[i];
            cout << leaders << " ";
        }
    }
}

int main(){
    int array[] ={16,17,4,3,5,2};
    int size = sizeof(array)/sizeof(array[0]);
    leaders_array(array,size);
}