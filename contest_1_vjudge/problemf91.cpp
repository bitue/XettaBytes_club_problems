#include<bits/stdc++.h>
using namespace std ;

int magic(int k){
    if(k>=101){
        return k-10 ;
    }
    return  magic(k+11) ;

}

int main (){
    while(true){
        int t ;
        cin>>t ;
        if(t==0){
            return 0;
        }
        else {
            cout<<magic(t)<<endl;

        }
    }
}