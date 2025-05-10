#include<iostream>
using namespace std;

void quickSort(int low, int high, int arr[]){
    if(low>high) return;

    int pivot=low;
    int i = low, j = high;

    while(i<=j){
        while(arr[i] <= arr[pivot]) i++;
        while(arr[j] > arr[pivot]) j--;
        if(i<j) swap(arr[i], arr[j]);
        }

        swap(arr[pivot], arr[j]);

        quickSort(low, j-1, arr);
        quickSort(j+1, high, arr);
}

int main(){

    int n, arr[100];

    cin >> n;
    for(int i = 0; i<n; i++){
        cin >> arr[i];
    }

    quickSort(0, n-1, arr);
    
    for(int i=n-1; i>= 0; i--){ // for decending order
        cout << arr[i] << " ";
    }

    return 0;
}