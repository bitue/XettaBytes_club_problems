#include<bits/stdc++.h>
using namespace std ;


int main (){
   
    while(true){
        int x , y , z ;
        cin>>x>>y>>z ;
        if(x==0 && y==0 && z==0){
            break ;
        }
        if(x==0){
            break ;
        }

        int morning_route[x];
        int evening_route[x];

        for(int i=0 ; i<x ; i++){
            cin>>morning_route[i];
           

        }
        for(int i=0 ; i<x ; i++){
            cin>>evening_route[i];
        }

        sort(morning_route, morning_route+x) ;
        sort(evening_route, evening_route+x);

        int total =0 ;

        for(int i=0 ; i<x ; i++){
            if(morning_route[i] + evening_route[x-1-i] > y ){
               int res = morning_route[i] + evening_route[x-1-i] - y ;
                total += res*z ;


            }  
        }
        cout<<total<<endl;  
    
}}