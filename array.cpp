#include <iostream>


int main(){
    int arr[10];
    int size = sizeof(arr)/sizeof(arr[0]);

    for (int i = 0; i < size; i++ ){
        arr[i] = i;
    }

    return 0;
}
