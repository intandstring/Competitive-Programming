#include <stdio.h>

int main(void) {
  int test_cases;
  int students;
  int count;
  int i, j;
  double temp;
  double average;
  int grades[100] = {0};
  scanf("%d", &test_cases);

  for (i = 0; i < test_cases; i++){
    average = 0;
    count = 0;
    scanf("%d", &students);
    for (j = 0; j < students; j++){
      scanf("%d", &grades[j]);
    }
    for (j = 0; j < students; j++){
      average += grades[j];
    }
    average /= students;
    for (j = 0; j < students; j++){
      if (average < grades[j]) {
        count++;
      }
    }
    printf("%0.3f%% \n", ((double)count/(double)students * 100));
    for (j = 0; j < students; j++){
      grades[j] = 0;
    }
  }
  return 0;
}