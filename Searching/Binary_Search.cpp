#include<iostream>
using namespace std;

int binary(int* arr, int low, int high, int element){
    int mid;
    while(low <= high){

        mid = low + (high - low)/2;

        if(arr[mid] == element){

            return mid;
        }
        if(arr[mid] < element){
            
            low = mid+1;
        }else{

            high = mid;
        }
    }
    return -1;
}
int main(){
    int A[] = {3, 5, 7, 8, 9, 99};
    int s = sizeof(A)/sizeof(A[0]);
    int element = 7;
    int search = binary(A, 0, s-1, element);
    if(search == -1){
        
        cout << "not found";
    }
    cout << "found at index : " << search ;

    return 0;
}