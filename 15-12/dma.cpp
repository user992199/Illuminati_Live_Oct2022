#include <iostream>
using namespace std;
void print(int arr[], int n){
    for(int i = 0; i < n; i++){
        arr[i] = i+1;
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
}
int main() {
    int n = 1000;
    int * arr = new int[n];
    
    // print(arr, n);
    delete []arr;
    arr = 0;
    return 0;
}
