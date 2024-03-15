#include<iostream>
using namespace std;

void printArray(int* arr, int num){
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
/* ## can use this also
void insertion(int* arr, int s, int sizeofarr, int element, int index){
    if(s < sizeofarr){

        for(int i=s-1; i>=index; i--){

            arr[i+1] = arr[i];
        }
        arr[index] = element;
    }
}
*/
int insertion(int* arr, int s, int capacity, int element, int index){

    if(s >= capacity){

        return -1;
    }    
    for(int i=s-1; i>=index; i--){

        arr[i+1] = arr[i];
    }

    arr[index] = element;   
}
int main(){
    int A[100] = {3, 67, 9, 1, 0, 34};
    int size = 6;
    int element = 10;
    int index = 3;

    printArray(A, size);
    insertion(A, size, 100, element, index);
    size += 1;
    printArray(A, size);
}