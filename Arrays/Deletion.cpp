#include<iostream>
using namespace std;

void printArray(int* arr, int num){
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void deletion(int* arr, int size, int index){

    for(int i=index; i<size-1; i++){
        
        arr[i] = arr[i + 1];
    }
}
int main(){
    int A[100] = {3, 67, 9, 1, 0, 34};
    int size = 6;
    int index = 2;

    printArray(A, size);
    deletion(A, size, index);
    size -= 1;
    printArray(A, size);
}