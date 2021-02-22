#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
  int test_cases;
  vector<int> nums;
  int temp;

  cin >> test_cases;
  for (int i = 1; i <= test_cases; i++) {
    for (int j = 0; j < 3; j++) {
      cin >> temp;
      nums.push_back(temp);
    }
    sort(nums.begin(), nums.end());
    cout << "Case " << i << ": " << nums.at(1) << endl;
    nums.clear();
  }
  return 0;
}