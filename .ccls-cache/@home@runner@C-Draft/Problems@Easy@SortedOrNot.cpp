#include <bits/stdc++.h>
using namespace std;

int sorted(int arr[], int n){
    for(int i=1; i<n ; i++){
        if(arr[i] >= arr[i-1]){

        }
        else{
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    bool ans = sorted(arr, n);

    if(ans){
        cout<<"Sorted";
    }
    else{
        cout<<"Not Sorted";
    }


    return 0;
}