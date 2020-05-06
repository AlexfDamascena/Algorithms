#include<bits/stdc++.h>
using namespace std;

//assume that both x and y are different.
// the array might contain duplicated.

int min_distance(int array[], int size,int x, int y){
    int prev;
    int dist = INT_MAX;

    for(int i=0; i < size; i++){
        if(array[i] == x || array[i] == y){
            prev = i;break;
        }
    }

    for(int i=prev+1; i<size;i++){
        if(array[i] == x || array [i] == y){
            if(array[prev] != array[i]){
                dist = min(i-prev,dist);
                prev=i;
            }
        }
    }
    return dist;
}

int main(){
    int array[] ={3,5,4,2,6,3,0,0,5,4,8,3};
    cout << min_distance(array,12,3,6) << endl;
}