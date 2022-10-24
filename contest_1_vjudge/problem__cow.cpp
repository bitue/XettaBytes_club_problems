#include<bits/stdc++.h>
using namespace std ;

int main (){
    int t ;
    cin>>t ;
    while(t--){
        int n , c ;
        cin>>n>>c ;
        int arr[n];
        for(int i=0 ; i<n ; i++) cin>>arr[i];

        sort(arr, arr+n);
        int max_value = arr[n-1];
        int curr[max_value]={0};
        for(int i=0 ; i<n ; i++){
            curr[arr[i]] = 1 ;
        }
         

    }
}