#include <iostream>
#include <iomanip>
#include <vector>

using namespace std;

int main() {
  int test_cases;
  int students;
  int count;
  double temp;
  double average;
  vector<double> grades;
  cin >> test_cases;
  for (int i = 0; i < test_cases; i++){
    average = 0;
    count = 0;
    cin >> students;
    for (int j = 0; j < students; j++){
      cin >> temp;
      grades.push_back(temp);
    }
    for (double grade : grades){
      average += grade;
    }
    average /= students;
    for (double grade : grades){
      if (average < grade) {
        count++;
      }
    }
    cout << fixed << setprecision(3) << ((double)count/(double)students * 100) << "%" << endl;
    grades.clear();
  }
  return 0;
}