// TIME COMPLEXITY --> O(2N)

#include <iostream>
using namespace std;

int sLargest(int n, int a[]){
  int max = -99999;
  for(int i=0; i<n; i++){
      if(a[i] > max){
          max = a[i];
      }
  }

  int sLargest = -99999;
  for(int i=0; i<n; i++){
      if(a[i] > sLargest && a[i] != max){
          sLargest = a[i];
      }
  }

  return sLargest;
}

int sSmallest(int n, int a[]){
  int min = 99999;  
  for(int i=0; i<n; i++){
      if(a[i] < min){
          min = a[i];
      }
  }

  int sSmallest = 99999;
  for(int i=0; i<n; i++){
      if(a[i] < sSmallest && a[i] != min){
          sSmallest = a[i];
      }
  }

  return sSmallest;
}

int main() {
  int n;
  cin>>n;

  int a[n];
  for(int i=0; i<n; i++){
    cin>>a[i];
  }

  cout<<sLargest(n, a)<<" ";
  cout<<sSmallest(n, a);
}