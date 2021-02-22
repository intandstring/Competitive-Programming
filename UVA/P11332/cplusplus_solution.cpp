#include <iostream>
#include <string>

using namespace std;

int main()
{
  string number;
  int sum;
  getline(cin, number);
  while (number != "0"){
    while (stoi(number) > 10){
      sum = 0;
      for (int i = 0; i < number.length(); i++) {
        sum += int(number[i]) - '0';
      }
      number = to_string(sum);
    }
    cout << number << endl;
    getline(cin, number);
  }

  return 0;
}
