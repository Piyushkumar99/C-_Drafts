#include <bits/stdc++.h>
using namespace std;

int getLongestSubarray(vector<int>& a, long long k) {
    int n = a.size(); // size of the array.
    int left = 0, right = 0; // 2 pointers
    long long sum = a[0];
    int maxLen = 0;
    while (right < n) {
        // if sum > k, reduce the subarray from left
        // until sum becomes less or equal to k:
        while (left <= right && sum > k) {
            sum -= a[left];
            left++;
        }

        // if sum = k, update the maxLen i.e. answer:
        if (sum == k) {
            maxLen = max(maxLen, right - left + 1); //+1 is there because index starts from 0
        }

        // Move forward thw right pointer:
        right++;
        if (right < n) sum += a[right];
    }

    return maxLen;
}

int main() {
  int n;
  cin >> n;
  long long k;
  cin >> k;
  int p;

  vector<int> a;
  for (int i = 0; i < n; i++) {
    cin >> p;
    a.push_back(p);
  }

  int sol = getLongestSubarray(a, k);
  cout << sol;

  return 0;
}