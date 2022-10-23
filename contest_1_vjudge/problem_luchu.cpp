#include<bits/stdc++.h>
using namespace std ;

bool flag = false ;


int bin_search(int *arr, int n , int value){
 
    int lb = 0 ;
    int ub = n-1 ;
    int mid ;
    while(lb<=ub){
        mid = (lb + ub)/ 2 ;
        if(arr[mid] == value){
            flag = true ;
            return mid  ;
        }
        else if (arr[mid] > value ){
            ub = mid-1 ;
           
        }
        else {
            lb = mid +1 ;
           
        }
        
    }
    flag = false ; 
   
    return  mid;

}


int main (){
    int n ;
    cin>>n ;
    int arr [n];
    flag = false ;
    for(int i=0 ; i<n ; i++){
        cin>>arr[i];
    }

    int q ;
    cin>>q ;
    while(q--){
        int x ;
        cin>>x ;
        int result = bin_search(arr, n, x);
        if(flag){
            flag = false ;
           
            if(result-1 >=0 && result+1<n){
                cout<<arr[result-1]<<" "<<arr[result+1]<<endl;
            }
            else if(result-1<0 && result+1 <n){
                cout<<"X"<<" "<<arr[result+1]<<endl;
            }
            else if(result-1>=0 && result+1 >=n) {
                cout<<arr[result-1]<<" "<<"X"<<endl;
            }
        }
        else {
            if(arr[result] > x){
                //prev 
                if(result-1>=0){
                    cout<<arr[result-1]<<" "<<arr[result]<<endl;
                }
                else {
                    cout<<"X"<<" "<<arr[result]<<endl;
                }
            }
            else {
                if(result+1 <n){
                    cout<<arr[result]<<" "<<arr[result+1]<<endl;
                }
                else {
                    cout<<arr[result]<<" "<<"X"<<endl;
                }

            }
         

        }
      

    }
}