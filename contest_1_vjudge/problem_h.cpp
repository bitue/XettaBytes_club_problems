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
        map<int , int> mp ;

        for(int i=0 ; i<n ; i++){
            if(mp[arr[i]]){
                mp[arr[i]] = mp[arr[i]] ;
            }
            else {
                mp[arr[i]] = i ;

            }
           

        }

        cout<<"CASE# "<<co<<":"<<endl;
       
        while(q--){
            int w ;
            cin>>w ;
          
          
            if(mp[w]){
                cout<<w<<" found at "<<mp[w]+1 <<endl;
            }
            else {
                cout<<w<<" not found"<<endl;
            }
        }
        co++ ;
    }
}