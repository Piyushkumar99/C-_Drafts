// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int unionArray(int arr1[], int arr2[], int n1, int n2){
    // as set contains unique elements in sorted order
    set<int> s;
    vector<int> Union;

    for (int i = 0; i < n1; i++)
        s.insert(arr1[i]);
    for (int i = 0; i < n2; i++)
        s.insert(arr2[i]);

    for (auto it: s)
        Union.push_back(it);
    return Union;
}

int main() {
    int n1, n2;
    cin>>n1>>n2;

    int arr1[n1];
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }

    int arr2[n2];
    for(int i=0; i<n2; i++){
        cin>>arr2[i];
    }

    unionArray(arr1, arr2, n1, n2);

    return 0;
}