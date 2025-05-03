// postfix to infix:
#include<bits/stdc++.h>
using namespace std;
int main(){
 
   string post;
   stack<string>st;
   cin>>post;
   for(int i=0;i<post.size();i++){
    if(post[i]>='a' && post[i]<='z'){
        string temp = "";
        temp+=post[i];
        st.push(temp);
    }
    else{
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