#include<bits/stdc++.h>
using namespace std;

//this algorithm will never be used in competitive programming,
//because the runtime is O(Nˆ2) and (N^2)/2 comparision.

void swap(int *x,int *y){
    int aux = *x;
    *x = *y;
    *y = aux;
}

void selection_sort(int array[], int size){
    int min;
    for(int i=0; i < size; i++){
        min = i;
        for(int j= i+1; j < size; j++){
            if(array[j] < array[min]) min = j;
        }
        swap(&array[i],&array[min]);
    }
}

void insertion_sort(int array[], int size){
    for(int i=1; i< size; i++){
        int v = array[i];
        int j = i;
        while(array[j-1] > v){
            array[j] = array[j-1];j--;
        }
        array[j] = v;
    }
}

void bubble_sort(int array[], int size){
    for(int i=0; i <size-1; i++){
        for(int j = 0; j < size-i-1; j++){
            if(array[j] > array[j+1]) swap(&array[j],&array[j+1]);
        }
    }
}
//sort a file of N whose keys are distinct integers between 0 and N-1
void  sort_range(int array[], int size){
    int arr[size];

    for(int i=0; i < size; i++) arr[array[i]] = array[i];
    for(int i=0; i < size; i++) array[i] = arr[i];
}


void print(int arr[],int size){
    for(int i=0;i< size;i++){
        if(i != size-1) cout << arr[i] << " ";
        else cout << arr[i] << endl;
    }
}

int main(){
    int arr[] = {-3,5,9,-1,10,56,10};
    int size = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr,size);
    print(arr,size);

    int arr2[] = {0,2,1,4,3,6,5,7,8};
    int size2 = sizeof(arr2)/sizeof(arr[0]);
    sort_range(arr2,size2);
    print(arr2,size2);

    return 0;


}