#include<iostream>
using namespace std;

void qs(int arr[], int low, int high){
    if(low> high) return;

    int pivot=low;
    int i=low, j=high;

    while(i<=j){

        while(arr[i] <= arr[pivot]) i++;
        while(arr[j] > arr[pivot]) j--;
        if(i<j) swap(arr[i], arr[j]);
    }

    swap(arr[j], arr[pivot]);

    qs(arr, low, j-1);
    qs(arr, j+1, high);
}

int main(){
    int n;
    cin >> n;
    int arr[n];   
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    qs(arr, 0, n-1);
    for(int i=0; i<n; i++){
        cout << arr[i] << " "; 
    }

}