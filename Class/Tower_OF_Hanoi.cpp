#include<iostream>
using namespace std;
void TOH(int N, char S, char D, char A){
    if(N==0) return;

    TOH(N-1, S, A ,D);  // SOURSE TO AUXILARY
    cout << "Move Disk " << N << " from " << S << " To " << D << endl;
    TOH(N-1, A, D, S); // AUXILARY TO DESTINATION
}
int main(){

    int n;
    cin >> n;
    TOH(n, 'A', 'C', 'B');
    return 0;
};


