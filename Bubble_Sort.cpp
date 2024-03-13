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
void bubble(int* arr, int num){
    int adaptive = 0;
    for(int i=0; i<num-1; i++){

        adaptive = 1;

        for(int j=0; j<num-1-i; j++){

            if(arr[j] > arr[j+1]){

                swap(&arr[j], &arr[j+1]);
                adaptive = 0;
            }
        }
        if(adaptive == 1){
            break;
        }
    }
}
int main(){
    int A[] = {4, 7, 1, 0, 99, 24};
    int s = sizeof(A)/sizeof(A[0]);

    printArray(A, s);
    bubble(A, s);
    printArray(A, s);

    return 0;
}