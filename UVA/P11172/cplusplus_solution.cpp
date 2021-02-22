#include <iostream>
using namespace std;

char comparator(int num1, int num2){
  if (num1 > num2){
    return '>';
  } 
  else if (num1 < num2){ 
    return '<';
  } 
  else {
    return '=';
  }
}

int main(){

  int input_amount = 0;
  int num1 = 0;
  int num2 = 0;

  cin >> input_amount;
  for (int i = 0; i < input_amount; i++){
    cin >> num1 >> num2;
    cout << comparator(num1, num2) << endl;
    
  }
  return 0;
}