#include<bits/stdc++.h>
using namespace std ;

int main (){
    int n, q , co;
    co=1 ;
    while(true){
        cin>>n>>q;
        if(n==0 && q ==0){
            break;
        }

        int arr[n];
        for(int i=0 ; i<n ; i++){
            cin>>arr[i];
        }
        sort(arr, arr+n);

       

        cout<<"CASE# "<<co<<":"<<endl;
       
        while(q--){
            int w ;
            cin>>w ;
            bool flag = false ;
            for(int i=0 ; i<n ; i++){
                if(arr[i]==w){
                    cout<<w<<" found at "<<i+1 <<endl;
                    flag = true ;
                    break;
                    
                }
              
            }
            if(!flag){
                  cout<<w<<" not found"<<endl;

            }

          
        }
        co++ ;
    }
}