// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void reverse(int arr[], int start, int end)
{
  while (start <= end)
  {
    int temp = arr[start];
    arr[start] = arr[end];
    arr[end] = temp;
    start++;
    end--;
  }
}

void OptimalLeftRotate(int arr[], int n, int d){
    reverse(arr, 0, d-1);
    reverse(arr, d-1, n-1);
    reverse(arr, 0, n-1);
}

void leftRotateByD(int arr[], int n, int d){
    d = d % n;
    int temp[d];

    // storing upto elements in temp array from the main array
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }

    // replacing the elements after dth element to the initial array
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }

    // Placing the remaining elements after the dth element
    for(int i=n-d; i<n; i++){
        arr[i] = temp[i - (n-d)];
    }
}

int main() {
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int d;
    cin>>d;

    leftRotateByD(arr, n, d);
    OptimalLeftRotate(arr, n, d);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}