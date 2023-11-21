#include <bits/stdc++.h>
using namespace std;

int longestSubarrayWithSumK(vector<int> a, long long k) {
  long long sum = a[0];
  int left = 0, right = 0;
  int maxLen = 0;
  int n = a.size();

  while (right < n) {
    while (left <= right && sum > k) {
      sum -= a[left];
      left++;
    }
    if (sum == k) {
      maxLen = max(maxLen, right - left + 1);
    }
    right++;
    if (right < n) {
      sum += a[right];
    }
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

  int sol = longestSubarrayWithSumK(a, k);
  cout << sol;

  return 0;
}