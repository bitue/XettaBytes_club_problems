#include<bits/stdc++.h>
using namespace std ;


int main (){
   
    while(true){
        int x , y , z ;
        cin>>x>>y>>z ;
        if(x==0 && y==0 && z==0){
            break ;
        }

        int morning_route[x];
        int evening_route[x];

        for(int i=0 ; i<x ; i++){
            cin>>morning_route[i];
            cin>>evening_route[i];

        }

        for(int i=0 ; i<x ; i++){
            cout<<"Morning "<<morning_route[i]<<" "<<" evening "<< evening_route[i]<<endl;
        }






     
    

    }
    
}