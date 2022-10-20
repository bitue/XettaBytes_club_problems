#include<bits/stdc++.h>
using namespace std ; 

int main (){
    string s , t ;
  
    while(cin>>s>>t){
        int co =0 ;
        for(int i =0 ; i<t.length() && co <s.length(); i++ ){

                if(s[co]==t[i]){
                    // cout<<s[i]<<endl;
                    co++;
                 
                }
            
        }
        if(co==s.length()){
            cout<<"Yes"<<endl;
        }
        else {
            cout<<"No"<<endl;
        }

    }
    

   
}