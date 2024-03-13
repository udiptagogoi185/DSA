#include<iostream>
using namespace std;

void printArray(int* arr, int num){
    for(int i=0; i<num; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}
void merge(int* arr, int low, int mid, int high){
    int B[100];
    int i, j, k;
    mid = (low + high)/2;
    i = low;
    j = mid+1;
    k = low;
    
    while(i<=mid && j<=high){

        if(arr[i]<arr[j]){

            B[k] = arr[i];
            i++, k++;
        }
        if(arr[j]<arr[i]){

            B[k] = arr[j];
            j++, k++;
        }
    }
    while(i<=mid){

        B[k] = arr[i];
        i++, k++;    
    }
    while(j<=high){

        B[k] = arr[j];
        j++, k++;
    }
    for(int i=0; i<=high; i++){
        arr[i] = B[i];
    }    
}
void mergeSort(int* arr, int low, int high){
    if(low < high){
        int mid = (low + high)/2;

        mergeSort(arr, low, mid);
        mergeSort(arr, mid+1, high);
        merge(arr, low, mid, high);
    }
}

int main(){
    int arr[] = {5, 8, 3, 99, 14, 2};
    int size = sizeof(arr)/sizeof(arr[0]);

    printArray(arr, size);
    mergeSort(arr, 0, size-1);
    printArray(arr, size);

    return 0;
}