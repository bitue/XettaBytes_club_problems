#include<bits/stdc++.h>
using namespace std ;

int main (){
    int  t ;
    cin>>t ;
    while(t--){
        string s ;
        cin>>s ;
        int co =0 ;
        stack<char> st ;
        if(s[0]=='>'){
            cout<<0<<endl;
        }
        else {
            st.push(s[0]);

            for(int i=1 ; i<s.length(); i++){
              
                if(!st.empty()){
                    if(st.top()=='<' && s[i]=='>'){
                        co+=2 ;
                      
                        st.pop();

                    }
                    else if(st.top()=='<' && s[i]=='<'){
                        st.push(s[i]);
                    }
                }
                else {
                    if(s[i]=='<'){
                        st.push(s[i]);

                    }
                    else {
                        break;
                    }
                }
            }
            

            if(!st.empty()){
                if(st.top()=='<'){
                    cout<<0<<endl;
                }
                else {
                    cout<<co<<endl;

                }
            }
            else {
                cout<<co<<endl;
            }

         
        


        }

       
       
       

    }
}