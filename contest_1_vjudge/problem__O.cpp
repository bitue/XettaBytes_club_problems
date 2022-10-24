#include<bits/stdc++.h>
using namespace std ;

int main (){
    string str ;
    cin>>str ;
    int arr[str.length()];
    for(int i=0 ; i<str.length()-1; i++){
        int ascii_code = str[i]-'a';
        arr[i]= ascii_code ;

    }

    int chk_ascii[str.length()] ;
    for(int i=0 ; i<str.length(); i++){
        chk_ascii[i]= arr[i];
    }

    sort(chk_ascii, chk_ascii+str.length()) ;
    bool invalid = false ;
    for(int i=0 ; i<str.length(); i++){
        if(chk_ascii[i] != arr[i]){
            invalid = true ;
            break;

        }
    }

    if(invalid){
        cout<<"Invalid"<<endl;
    }
    else {
        cout<<"Valid"<<endl;
    }

    
}