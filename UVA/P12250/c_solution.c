#include <stdio.h>
#include <string.h>

int main(void){

  char hello[15];
  int i = 1;

  scanf("%s", &hello);
  while ((strcmp(hello, "#")))
  {
    if (!(strcmp(hello, "HELLO"))) {
      printf("Case %d: %s \n", i++, "ENGLISH");
    } else if (!(strcmp(hello, "HOLA"))) {
      printf("Case %d: %s \n", i++, "SPANISH");
    } else if (!(strcmp(hello, "HALLO"))) {
      printf("Case %d: %s \n", i++, "GERMAN");
    } else if (!(strcmp(hello, "BONJOUR"))) {
      printf("Case %d: %s \n", i++, "FRENCH");
    } else if (!(strcmp(hello, "CIAO"))) {
      printf("Case %d: %s \n", i++, "ITALIAN");
    } else if (!(strcmp(hello, "ZDRAVSTVUJTE"))) {
      printf("Case %d: %s \n", i++, "RUSSIAN");
    } else {
      printf("Case %d: %s \n", i++, "UNKNOWN");
    }
    scanf("%s", &hello);
  }
  

  return 0;
}