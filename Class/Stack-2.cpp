// postfix to infix
#include<bits/stdc++.h>
using namespace std;
int main(){
 
   string post;
   stack<string>st;
   cin>>post;
   for(int i=0;i<post.size();i++){
    if(post[i]>='a' && post[i]<='z'){ // Operend
        string temp = "";
        temp+=post[i];
        st.push(temp);
        /*
        ✅ Why temp string is used:
        Reason: 
        To convert a single character (post[i]) into a string before pushing it to the stack, because the stack stores string, not char.

        🧠 Why not push post[i] directly?
        Because post[i] is a char, and st is a stack<string>. You can’t push a char into a stack<string> directly.

        So, you must first make it a string.*/
    }
    else{ // Operator
            string s1 = st.top();
            st.pop();
            string s2 = st.top();
            st.pop();
            string s3  = "("+s2+post[i]+s1+")";
            st.push(s3);
        }
   }

   cout<<st.top()<<endl; 
}