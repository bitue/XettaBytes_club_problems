#include<bits/stdc++.h>
using namespace std ; 

int main(){
    int t ;
    cin>>t ;

    while(t--){
        string s ;
        cin>>s ;
        int co =0 ;
        int pt = 0;
        int i ; 
        for( i=0 ; i<s.length(); i++){
            if(s[i]=='<'){
                pt++;
            }
            else if (s[i]=='>'){
                pt--;
                if(pt<0){
                    break;
                }
            }

            if(pt==0){
                co = i+1 ;
            }
           
           
           

        }
       
        cout<<co<<endl;
    }
}

   