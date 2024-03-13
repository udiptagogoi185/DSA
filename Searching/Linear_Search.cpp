#include<iostream>
using namespace std;

int linear(int* arr, int element, int num){
    for(int i=0; i<num; i++){
        if(arr[i] == element){

            return i;
        }
    }
    return -1;
}
int main(){
    int A[] = {4, 7, 1, 0, 99, 24};
    int s = sizeof(A)/sizeof(A[0]);
    int element = 7;
    int search = linear(A, element, s);
    if(search == -1){
        
        cout << "not found";
    }
    cout << "found at index : " << search ;

    return 0;
}