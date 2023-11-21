#include <bits/stdc++.h>

using namespace std;

int missingNumber(vector<int> nums, int n){
    int maxi = 0;
    int count = 0;

    for(int i=0; i<n; i++){
        if(nums[i] == 1){
            count ++;
            maxi = max(count, maxi);
        }
        else{
            count = 0;
        }
    }

    return maxi;
}

int main()
{
    int n;
    cin>>n;
    int a;

    vector<int> nums;
    for(int i=0; i<n; i++){
        nums.push_back(a);
    }

    missingNumber(nums, n);

    return 0;
}
