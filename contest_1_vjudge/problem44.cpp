#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n ; 
    string s ;
    cin>>n>>s ;
    map<int, int> mp ;
   
    int base = 97 ;
     
    for(int i=0 ; i<s.length(); i++){
        int ch = int(s[i]);
        mp[i+97] = ch ;
    }
    // for(int i=0 ; i<s.length() ; i++){
    //     cout<<(i+97)<<":"<<(mp[i+97])<<endl; 
    // }



    while(n--){
        string res ;
        cin>>res ;
        string out ="";
        int ch ;
        for(int i=0 ; i<res.length(); i++){
            bool flag = false ;
            char y = res[i];
            if(isupper(res[i])){
                y = tolower(y);
                flag = true ;
            }
             ch = int(y);
             if(mp[ch]){
                char x = char (mp[ch]);
                if(flag){
                    x = toupper(x);
                }
                out+=x ;
             }
             else {
                if(res[i]=='_'){
                    out+=' ';
                }
                else {
                    out+=res[i];
                }
                // else if(res[i]=='!'){
                //     out+='!';
                // }
                // else if(res[i]=='.'){
                //     out+='.';
                // }
                // else if(res[i]=='?'){
                //     out+='?';
                // }
                // else if(res[i]==' '){
                //     out+=' ';
                // }

             }

        }
        cout<<out<<endl;

    }
}