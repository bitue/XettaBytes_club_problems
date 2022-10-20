#include<bits/stdc++.h>
using namespace std ;

void make_wave(int n ){
    int co = 1 ;
    bool flag = false ;
    while(co!=0){
            for(int i=0 ; i<co ; i++){
                cout<<co; 
            } 
            if(co==n || co==9){    
                flag = true ;
            }
            if(!flag){

                co++;
            }
            else {
                co--;
            }
            cout<<endl;
    }
}

int main (){
    int t ;
    cin>>t ;
   
    for (int w =0 ; w<t ; w++){
        bool flag1= false ;
        int n ;
        cin>>n ;
        int f ;
        cin>>f ;
        // int c = 0 ;
        for(int k =0 ; k<f ; k++){
            make_wave(n);
            if(k+1 ==f && w+1 ==t){

            }
            else {
                cout<<endl;
            }
           
       

        }
       

    }
   
   
    
   

}