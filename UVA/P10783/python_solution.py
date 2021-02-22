test_cases = int(input())
i = 1

while (i <= test_cases):
  lower_limit = int(input())
  upper_limit = int(input())
  sum = 0
  for num in range(lower_limit, upper_limit + 1):
    if (num % 2 != 0):
      sum += num
  print ("Case {}: {}".format(i, sum))
  i += 1