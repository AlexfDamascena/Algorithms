#include<bits/stdc++.h>
using namespace std;

// given an sorted array with n elements,found a fixed point(array[index] = index)
// if not exist : return -1

//this approach will give to us a O(log(n)) time, that for sure will be better than linear search in O(n) time.
//this is a modified version.

int binary_search(int array[],int l, int r){
    if(r >= l){
        int m = l + (r-l)/2;
        if(array[m] == m) return m;
        else if(m > array[m]) return binary_search(array,m+1,r);
        else return binary_search(array,l,m-1);

    }
    return -1;
}

int main(){
    int array[] = {-1,1,2,5,6,7,10};
    int size = sizeof(array)/sizeof(array[0]);
    cout << binary_search(array,0,size-1) << endl;

}