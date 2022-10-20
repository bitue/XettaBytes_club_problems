#include<bits/stdc++.h>
using namespace std ;

int main (){
    int t ;
    cin>>t ;
    int arr[t];
    for(int i =0 ; i<t ; i++){
        cin>>arr[i] ;
    }
    int co = 0 ;
    for(int i=0 ; i<t ; i++){
        co+=arr[i];
        arr[i]= co ;
    }
    // for(int i =0 ; i<t ; i++){
    //     cout<<arr[i]<<" ";
    // }
    int q ;
    cin>>q ;
    while(q--){
        int x , y ;
        cin>>x>>y ;
        if(x==0){
            cout<<arr[y]<<endl;
            continue;
        }
        int res = arr[y] - arr[x-1] ;
        cout<<res<<endl;
    }
}