// TIME COMPLEXITY ---> O(N)

#include <bits/stdc++.h>
using namespace std;

int sLargest(int arr[], int n){
  int largest = arr[0];
  int sLar = INT_MIN;
  for(int i=0; i<n; i++){
    if(arr[i] > largest){
      sLar = largest;
      largest = arr[i];
    }
    else if (arr[i] > sLar && arr[i] != largest){
      sLar = arr[i];
    }
  }
  return sLar;
}

int sSmallest(int arr[], int n){
  int smallest = arr[0];
  int sSmall = INT_MAX;
  for (int i = 0; i<n; i++){
    if(arr[i] < smallest){
      sSmall = smallest;
      smallest = arr[i];
    }
    else if(arr[i] < sSmall && arr[i] != smallest){
      sSmall = arr[i];
    }
  }
  return sSmall;
}

int main() {
  int n;
  cin >> n;

  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout<<sLargest(arr, n)<<" ";
  cout<<sSmallest(arr, n);
}