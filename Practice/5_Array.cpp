#include<iostream>
using namespace std;

int main(){

    int arr[100] = {0,10,20,30,40,50};
    int n = 6;
/*Array Insertion
    int pos=3, item = 35;

    for(int i=n-1; i>= pos; i--){
        arr[i+1] = arr[i];
    }
    arr[pos] = item;
    n++;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
*/
/*Array Element Delete
    int pos = 3;

    for(int i = pos; i<(n-1); i++){
        arr[i] = arr[i+1];
    }
    n--;

    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
*/
    int item = 50, flag = 0;

    for(int i=0; i<n; i++){
        if(arr[i] == item){
            flag = 1;
            cout << "Found at " << i << endl;
            break;
        }
    }
    if(flag == 0) cout << "Not Found" << endl;
    return 0;
}