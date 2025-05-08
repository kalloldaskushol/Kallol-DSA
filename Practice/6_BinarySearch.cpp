#include<iostream>
using namespace std;

int main(){

    int arr[100], n, low, high, mid, item;
    bool flag = 0;
    cin >> n;

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    cin >> item;
    low = 0, high = n-1;

    while(low<= high){
        mid =(high + low)/2;

        if(item == arr[mid]){
            cout << "Found at " << mid << endl;
            flag = 1;
            break;
        }
        else if(item> arr[mid]) low = mid+1;
        else high = mid-1;
    }

    return 0;
}