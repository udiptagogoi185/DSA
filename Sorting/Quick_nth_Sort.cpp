#include<iostream>
using namespace std;

void printArray(int* arr, int num){
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
int partition(int* arr, int low, int high){
    int pivot = arr[high];
    int i = low-1;
    for(int j=low; j<high; j++){
        if(arr[j] < pivot){
            i++;
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
        i++;
        int temp = arr[i];
        arr[i] = arr[high];
        arr[high] = temp;
        return i;
}
void quick(int* arr, int low, int high){
    if(low < high){
        int Pindx = partition(arr, low, high);

        quick(arr, Pindx+1, high);        
        quick(arr, low, Pindx-1);
    }
}

int main(){
    int arr[] = {5, 8, 3, 99, 14, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    quick(arr, 0, size-1);
    printArray(arr, size);

    return 0;
}