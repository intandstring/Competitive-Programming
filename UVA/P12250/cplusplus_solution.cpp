#include <iostream>
#include <string>
using namespace std;

int main() {
  string hello;
  string language;
  int i = 1;
  cin >> hello;

  while (hello != "#"){
    if (hello == "HELLO") {
      language = "ENGLISH";
    } else if (hello == "HOLA") {
      language = "SPANISH";
    } else if (hello == "HALLO") {
      language = "GERMAN";
    } else if (hello == "BONJOUR") {
      language = "FRENCH";
    } else if (hello == "CIAO") {
      language = "ITALIAN";
    } else if (hello == "ZDRAVSTVUJTE") {
      language = "RUSSIAN";
    } else {
      language = "UNKNOWN";
    }
    cout << "Case " << i << ": " << language << endl;
    i++;
    cin >> hello;
  }

  return 0;
}