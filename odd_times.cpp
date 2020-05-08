#include<bits/stdc++.h>
using namespace std;

//given an array of positive integers, find the number
//which occurs odd times

int odd_times(int array[], int size){
    int ans = array[0];
    for(int i=1; i < size; i++){
        ans ^= array[i];
    }
    return ans;
}

int main(){
    int array[] = {1,2,3,2,3,1,3};
    int size = sizeof(array)/sizeof(array[0]);
    cout << odd_times(array,size) << endl;
}