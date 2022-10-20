#include<bits/stdc++.h>
using namespace std ;

int main (){
    int t ;
    cin>>t ;
    while(t--){
        int n , q ;
        cin>>n>>q ;
        int arr[n]={0};
        int diff_arr [n+1]={0};
        // create diff array 
        for(int i=0 ; i<n+1 ; i++){
            if(i==0){
                diff_arr[i]= arr[i];

            }
            else {
                diff_arr[i]= arr[i] - arr[i-1];
            }
        }

        // cout<<"diff array"<<endl;
        // for(int i=0 ; i<6 ; i++){
        //     cout<<diff_arr[i]<<endl;
        // }

        while(q--){
            int l, r, w ;
            cin>>l>>r>>w ;

            diff_arr[l] = diff_arr[l] + w ;
            diff_arr[r+1]= diff_arr[r+1] -w ;
        }

        for(int i=0 ; i<n+1 ; i++){
            if(i==0){
                diff_arr[i]= diff_arr[i];

            }
            else {
                diff_arr[i] = diff_arr[i] + diff_arr[i-1] ;
            }
        }

        int y ;
        cin>>y ;
        while(y--){
            int g ;
            cin>>g ;
            cout<<diff_arr[g]<<endl;
        }
    }
   
}