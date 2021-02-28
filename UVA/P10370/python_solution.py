import math

test_cases = int(input())

while (test_cases != 0):
  line_in = input()
  nums = list(map(int, line_in.split()))
  amount_of_students = nums[0]
  grades = []
  for i in range(amount_of_students):
    grades.append(nums[i+1])
  avg = sum(grades)/amount_of_students
  greater_than_avg = 0
  for grade in grades:
    if grade > avg:
      greater_than_avg += 1
  print("{:.3f}%".format(((greater_than_avg/amount_of_students)*100)))
  grades.clear()
  test_cases -= 1