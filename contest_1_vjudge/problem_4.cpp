#include<bits/stdc++.h>
using namespace std ;

int main (){
   
    while(true){
        int x , y , z ;
        cin>>x>>y>>z ;
        if(x==0 && y==0 && z==0){
            break ;
        }
        int total =0 ;
        int road_morning[x];
        int road_afternoon[x];
        for(int i=0 ; i<x ; i++){
            cin>>road_morning[i];
        }
        for(int j=0 ; j<x ; j++){
            cin>>road_afternoon[j];
        }
        // cout<<"Morning route "<<endl;
        // for(int i=0 ; i<x ; i++){
        //     cout<<road_morning[i]<<endl;
        // }

        for(int i=0 ; i<x ; i++){
            total +=road_morning[i];
            total +=road_afternoon[i];
        }
        

      
      
        int res = total - x*y ;
        if(res >= 0 ) {
            cout<<z*res<<endl ;
        }
        else {
            cout<<0<<endl;

        }

    }
    
}