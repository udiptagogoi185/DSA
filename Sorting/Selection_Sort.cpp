#include<iostream>
using namespace std;

void swap(int* a, int* b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void printArray(int* arr, int num){
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void selection(int* arr, int num){
    int index;
    
    for(int i=0; i<num-1; i++){

        index = arr[i];

        for(int j=i+1; j<num; j++){

            if(arr[j] < index){

                swap(&arr[j], &arr[i]);
            }
        }
        index = arr[i];
    }
}
int main(){
    int A[] = {4, 7, 1, 0, 99, 24};
    int s = sizeof(A)/sizeof(A[0]);

    printArray(A, s);
    selection(A, s);
    printArray(A, s);

    return 0;
}