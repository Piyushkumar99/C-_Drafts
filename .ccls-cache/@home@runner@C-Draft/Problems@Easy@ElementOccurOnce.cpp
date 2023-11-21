#include<bits/stdc++.h>
using namespace std;

int elementOccurOnce(vector<int> nums){
    int res = 0;
    for(int i=0; i<nums.size(); i++){
        res ^= nums[i];
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int a;

    vector<int> nums;
    for(int i=0; i<n; i++){
        cin>>a;
        nums.push_back(a);
    }

    int sol = elementOccurOnce(nums);
    cout<<sol;

    return 0;
}