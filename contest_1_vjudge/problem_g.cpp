#include<bits/stdc++.h>
using namespace std ; 

int main (){
    int t ;
    cin>>t ;
    for(int i=0 ; i<t ; i++){
        string s ;
        cin>>s ;
        stack<char> st ;

        st.push(s[0]);
        int co=0 ;
     
        for(int i=1 ; i<s.length();i++){
            if(!st.empty()){
                if(st.top()=='<' && s[i]=='>'){
                st.pop();
                co+=2 ;
                }
                else if (st.top()=='>' && s[i]=='<'){
                    st.pop();
                }
           else {
              st.push(s[i]);
           }

        }
        else {
            st.push(s[i]) ;
        }
         


        }

        cout<<co<<endl;
       


    }
}