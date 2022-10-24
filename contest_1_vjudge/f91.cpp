#include<bits/stdc++.h>
using namespace std ;

int f91(int x){
    if(x <=100){
       
        return f91(f91(x+11));
    }
    else {
        return x-10 ;
    }
}

int main (){
    while(true){
        int n ;
        cin>>n ;
        if(n!=0){
            int t =  f91(n);
            cout<<"f91("<<n<<") = " << t <<endl;
        }
        else {
            break;
        }
      

    }
    
   
}