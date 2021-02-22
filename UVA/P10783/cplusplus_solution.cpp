#include <iostream>

using namespace std;

int main () {
  int test_cases;
  int lower_limit;
  int upper_limit;
  int sum;

  cin >> test_cases;
  for (int i = 1; i <= test_cases; i++){
    sum = 0;
    cin >> lower_limit;
    cin >> upper_limit;
    for (int j = lower_limit; j <= upper_limit; j++){
      if (j % 2 != 0){
        sum += j;
      }
    }
    cout << "Case " << i << ": " << sum << endl; 
  }

  return 0;
}