#include<bits/stdc++.h>
using namespace std;

//some detail about three modifications which improve quicksort

void swap(int *x, int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}
int partition(int array[],int l,int r){
    int pivot = array[r];
    int i = l-1;

    for(int j= l; j < r; j++){
        if(pivot > array[j]){
            i++;
            swap(&array[i],&array[j]);

        }
    }
    swap(&array[i+1],&array[r]);
    i++;
    return i;
}

void basic_quicksort(int array[],int l, int r){
    if(l < r){
        int n = partition(array,l,r);

        basic_quicksort(array,l,n-1);
        basic_quicksort(array,n+1,r);
    }
}

void print(int array[],int size){
    for(int i=0; i < size ; i++){
        if(i != size -1) cout << array[i] << " ";
        else cout << array[i] << endl;
    }
}


int main(){

    int array[] ={10, 2, 4 , 5 ,6 ,7,10,-1,-2};
    int size = sizeof(array)/sizeof(array[0]);
    basic_quicksort(array,0,size-1);
    print(array,size);


}