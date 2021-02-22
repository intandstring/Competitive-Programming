#include <iostream>
#include <cstdlib>
using namespace std;

int main(void) {

int num1, num2;
while (cin >> num1 >> num2) {
   cout << abs(num1 - num2) << endl;
}
return 0;
}