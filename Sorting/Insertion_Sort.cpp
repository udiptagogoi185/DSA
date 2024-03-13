#include<iostream>
using namespace std;

void printArray(int* arr, int num){
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void insertion(int* arr, int num){
    int key, j;
    for(int i=1; i<num; i++){

        key = arr[i];
        j = i-1;

        while(j >= 0 && arr[j] > key){

            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
int main(){
    int A[] = {4, 7, 1, 0, 99, 24};
    int s = sizeof(A)/sizeof(A[0]);

    printArray(A, s);
    insertion(A, s);
    printArray(A, s);

    return 0;
}