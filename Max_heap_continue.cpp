#include<bits/stdc++.h>
using namespace std;

void swap(int *y, int  *w){
    int aux = *y;
    *y = *w;
    *w = aux;
}

class HeapMax{
    int *pointer;
    int max_size;
    int curr_size;

public:
    HeapMax(int max_size);

    int parent(int i){
        if(i & 1) return (i-1)/2;
        else return i/2;
    }

    int right_child(int parent){
        return parent*2 + 2;
    }

    int left_child(int parent){
        return parent*2 + 1;
    }

    int get_max(){return pointer[0];}

    void delete_key(int i);
    void insert_key(int i);
    void up_heap(int i);
};

HeapMax::HeapMax(int capacity){
    pointer = new int[capacity];
    curr_size = 0;
    max_size = capacity;
}

void HeapMax::insert_key(int i) {
    if (curr_size == max_size) { return; }

    int key = curr_size;
    pointer[key] = i;
    up_heap(key);

    curr_size++;

}

void HeapMax::up_heap(int i) {
    while( i != 0 && pointer[parent(i)] < pointer[i]){
        swap(&pointer[i], &pointer[parent(i)]);
        i = parent(i);
    }
}
