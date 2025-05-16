#include<iostream>
using namespace std;

int main(){

    // string st = "programming764316";
    // // /*
    // // Filter a,e,i,o
    // for(int i = 0; i<st.size(); i++){
    //     if(st[i] != 'a' && st[i] != 'e' && st[i] != 'i' && st[i] != 'o' &&st[i] != 'u'){
    //         cout << st[i] << endl;
    //     }
    // }
    // // */
/* Alpa, dig separation
    string alpa = "", dig ="";

    for(int i = 0; i<= st.size(); i++){
        if(st[i] >= 'a' && st[i] <= 'z'){
            alpa+= st[i];
        }
        else if(st[i] >= '0' && st[i] <= '9'){
            dig+= st[i];
        }
    }
    cout << alpa << " " << dig <<endl;
*/
/*Palindrome
    string st_1 = "madam";
    string st_rev = "";
*
    for(int i = 0; i< st_1.size(); i++){
        st_rev+=st_1[i];
    }

    if(st_rev==st_1){
        cout << "Palindrome" << endl;
    }else{
        cout << "Not Palindrome" <<endl;
    }
    */

    /*2D String Check 
3
apple
orange
sky
    string st_2[100];
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> st_2[i];
    }

    for(int i =0; i<n; i++){
        for(int j = 0; j<st_2[i].size(); j++){
            
            if(st_2[i][j] == 'a' || st_2[i][j] == 'o' ||st_2[i][j] == 'i' ||st_2[i][j] == 'e' ||st_2[i][j] == 'u'){
                cout << st_2[i][j];
            }
        }
        cout << endl;
    }
    */
/*2D String Reverse
3
apple
orange
sky 
    string st[100];
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> st[i];
    }

    cout << endl;

    for(int i=0; i<n; i++){
        for(int j=st[i].size()-1; j>=0; j--){
            cout << st[i][j];
        }
        cout << endl;
    }
*/
/*2D String Palindrome Check
    string st[100];
    int n;
    cin >> n;

    for(int i = 0; i<n; i++){
        cin >> st[i];
    }

    cout << endl;

    for(int i=0; i<n; i++){
        string st_rev = "";

        for(int j=st[i].size()-1; j>=0; j--){
            st_rev += st[i][j];
        }
        if(st[i] == st_rev){
            cout << st[i] << endl;
        }
    }
*/
    return 0;
}