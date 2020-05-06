#include<bits/stdc++.h>
using namespace std;

// find an element that appears at least n/2 times in array of length n;
//using moore's voting algorithm

int find_element(int array[], int size){
    int ans = 0,count = 1;

    for(int i=1; i < size; i++){
        if(array[ans] == array[i]) count++;
        else count--;
        if(count == 0){
            ans = i;count= 1;
        }
    }
    return array[ans];
}

int majority(int array[],int size,int possible){
    int times= 0;
    for(int i=0; i < size; i++){
        if(array[i] == possible)times++;
    }
    int ans = (times > size/2) ? possible : -1;
    return ans;
}

int main(){
    int array [] = {3,3,4,2,4,4,2,4,4};
    int size = sizeof(array)/sizeof(array[0]);
    cout << majority(array,size,find_element(array,size)) << endl;
}

