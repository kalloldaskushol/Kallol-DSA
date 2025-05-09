// infix to postfix
#include<iostream>
#include<stack>
using namespace std;

int precedence(char op) {
    if(op == '+' || op == '-') return 1;
    else if(op == '*' || op == '/') return 2;
    else if(op == '^') return 3;
}

int main(){

    string in, post = "";
    stack<char>st;
    
    cin >> in;

    for(int i=0; i<in.size(); i++){

        if(in[i]>= 'a' && in[i]<= 'z'){
            post +=  in[i];
        }
        else if(in[i] == '('){
            st.push(in[i]);
        }
        else if(in[i] == ')'){
            while(st.top() != '('){
                post += st.top();
                st.pop();
            }
            st.pop(); // To pop '('
        }
        else{
            if(st.empty() == 1 || st.top() == '(' || precedence(in[i] > precedence(st.top())) ){
                st.push(in[i]);
            }
            else{
                while(st.empty() != 1 && st.top() != '(' && precedence(in[i] <= precedence(st.top()))){
                    post += st.top();
                    st.pop();
                }
                st.push(in[i]);
            }

        }
    }

    while(st.empty() != 1){
        post += st.top();
        st.pop();
    }

    cout << post << endl;
    
    return 0;

}