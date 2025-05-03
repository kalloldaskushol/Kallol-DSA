#include<iostream>
using namespace std;

void quickSort(int start, int ending, int a[]){
    if(start> ending) return;

    int pivot = start, i =start, j=ending;

    while(i<=j){
        while(a[i]<=a[pivot])   i++;
        while(a[j]>a[pivot])   j--; // when equal then break that's why we didnt use =  
        if(i < j) swap(a[i], a[j]);
    }
    swap(a[pivot], a[j]);
    
    quickSort(start, j-1,a);
    quickSort(j+1, ending, a);
}

int main(){

    int n, arr[100];
    cin >> n ;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    quickSort(0, n-1, arr);
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}