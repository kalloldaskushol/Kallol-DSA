// postfix to infix 23+5*
#include<bits/stdc++.h>
using namespace std;
int main(){
 
   string post;
   stack<int>st;
   cin>>post;
   for(int i=0;i<post.size();i++){
    if(post[i]>='0' && post[i]<='9'){
       
        st.push(post[i]-48);
    }
    else{
            int s1 = st.top();
            st.pop();
            int s2 = st.top();
            st.pop();
            if(post[i]=='+') st.push(s2+s1);
            else if(post[i]=='-') st.push(s2-s1);
            else if(post[i]=='*') st.push(s2*s1);
            else if(post[i]=='/') st.push(s2/s1);
            else if(post[i]=='^') st.push(pow(s2,s1));
        }
   }

   cout<<st.top()<<endl; 
}